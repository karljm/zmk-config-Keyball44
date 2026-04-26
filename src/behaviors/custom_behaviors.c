/*
 * Repo-local custom ZMK behaviors for the Keyball config.
 *
 * Keep bespoke behavior logic here so future custom features have one home.
 *
 * SPDX-License-Identifier: MIT
 */

#include <errno.h>
#include <stdbool.h>
#include <stdint.h>

#include <zephyr/device.h>
#include <zephyr/logging/log.h>

#include <drivers/behavior.h>
#include <zmk/behavior.h>
#include <zmk/keymap.h>

LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

static uint8_t edit_parent_hold_count;
static int16_t edit_active_child_layer = -1;

static bool edit_parent_is_active(void) { return edit_parent_hold_count > 0; }

static int edit_parent_activate_child_layer(uint32_t layer) {
    if (!edit_parent_is_active()) {
        return -EPERM;
    }

    if (edit_active_child_layer == (int16_t)layer) {
        return 0;
    }

    if (edit_active_child_layer >= 0) {
        zmk_keymap_layer_deactivate(edit_active_child_layer);
    }

    edit_active_child_layer = (int16_t)layer;
    return zmk_keymap_layer_activate(layer);
}

#define DT_DRV_COMPAT zmk_behavior_edit_parent

#if DT_HAS_COMPAT_STATUS_OKAY(DT_DRV_COMPAT)

static int edit_parent_binding_pressed(struct zmk_behavior_binding *binding,
                                       struct zmk_behavior_binding_event event) {
    LOG_DBG("edit parent press: position %d layer %d", event.position, binding->param1);

    if (edit_parent_hold_count == 0) {
        zmk_keymap_layer_activate(binding->param1);
    }

    if (edit_parent_hold_count < UINT8_MAX) {
        edit_parent_hold_count++;
    }

    return ZMK_BEHAVIOR_OPAQUE;
}

static int edit_parent_binding_released(struct zmk_behavior_binding *binding,
                                        struct zmk_behavior_binding_event event) {
    LOG_DBG("edit parent release: position %d layer %d", event.position, binding->param1);

    if (edit_parent_hold_count > 0) {
        edit_parent_hold_count--;
    }

    if (edit_parent_hold_count == 0) {
        if (edit_active_child_layer >= 0) {
            zmk_keymap_layer_deactivate(edit_active_child_layer);
            edit_active_child_layer = -1;
        }

        zmk_keymap_layer_deactivate(binding->param1);
    }

    return ZMK_BEHAVIOR_OPAQUE;
}

static const struct behavior_driver_api behavior_edit_parent_driver_api = {
    .binding_pressed = edit_parent_binding_pressed,
    .binding_released = edit_parent_binding_released,
};

BEHAVIOR_DT_INST_DEFINE(0, NULL, NULL, NULL, NULL, POST_KERNEL, CONFIG_KERNEL_INIT_PRIORITY_DEFAULT,
                        &behavior_edit_parent_driver_api);

#endif /* DT_HAS_COMPAT_STATUS_OKAY(DT_DRV_COMPAT) */

#undef DT_DRV_COMPAT
#define DT_DRV_COMPAT zmk_behavior_edit_child_layer

#if DT_HAS_COMPAT_STATUS_OKAY(DT_DRV_COMPAT)

static int edit_child_binding_pressed(struct zmk_behavior_binding *binding,
                                      struct zmk_behavior_binding_event event) {
    LOG_DBG("edit child press: position %d layer %d", event.position, binding->param1);

    if (!edit_parent_is_active()) {
        return ZMK_BEHAVIOR_OPAQUE;
    }

    return edit_parent_activate_child_layer(binding->param1);
}

static int edit_child_binding_released(struct zmk_behavior_binding *binding,
                                       struct zmk_behavior_binding_event event) {
    LOG_DBG("edit child release: position %d layer %d", event.position, binding->param1);
    return ZMK_BEHAVIOR_OPAQUE;
}

static const struct behavior_driver_api behavior_edit_child_driver_api = {
    .binding_pressed = edit_child_binding_pressed,
    .binding_released = edit_child_binding_released,
};

BEHAVIOR_DT_INST_DEFINE(0, NULL, NULL, NULL, NULL, POST_KERNEL, CONFIG_KERNEL_INIT_PRIORITY_DEFAULT,
                        &behavior_edit_child_driver_api);

#endif /* DT_HAS_COMPAT_STATUS_OKAY(DT_DRV_COMPAT) */
