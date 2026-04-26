/*
 * Copyright (c) 2026
 *
 * SPDX-License-Identifier: MIT
 */

#define DT_DRV_COMPAT zmk_behavior_edit_child_layer

#include <stdbool.h>
#include <stdint.h>

#include <zephyr/device.h>
#include <zephyr/logging/log.h>

#include <drivers/behavior.h>
#include <zmk/behavior.h>

bool zmk_behavior_edit_parent_is_active(void);
int zmk_behavior_edit_parent_activate_child_layer(uint32_t layer);

LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

static int edit_child_layer_keymap_binding_pressed(struct zmk_behavior_binding *binding,
                                                   struct zmk_behavior_binding_event event) {
    LOG_DBG("position %d layer %d", event.position, binding->param1);

    if (!zmk_behavior_edit_parent_is_active()) {
        return ZMK_BEHAVIOR_OPAQUE;
    }

    return zmk_behavior_edit_parent_activate_child_layer(binding->param1);
}

static int edit_child_layer_keymap_binding_released(struct zmk_behavior_binding *binding,
                                                    struct zmk_behavior_binding_event event) {
    LOG_DBG("position %d layer %d", event.position, binding->param1);
    return ZMK_BEHAVIOR_OPAQUE;
}

static const struct behavior_driver_api behavior_edit_child_layer_driver_api = {
    .binding_pressed = edit_child_layer_keymap_binding_pressed,
    .binding_released = edit_child_layer_keymap_binding_released,
};

BEHAVIOR_DT_INST_DEFINE(0, NULL, NULL, NULL, NULL, POST_KERNEL, CONFIG_KERNEL_INIT_PRIORITY_DEFAULT,
                        &behavior_edit_child_layer_driver_api);
