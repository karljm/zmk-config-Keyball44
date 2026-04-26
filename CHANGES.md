# Changes

Use this file to track layout and behavior changes as the Keyball config evolves.

## Unreleased

### Commit: Refine edit layer cleanup and sticky mod combos

- Added quick-release sticky modifier behavior for mod combos.
- Routed EDIT Space through a custom hold-tap that clears toggled Mouse/Scroll layers on release.
- Added explicit layer toggle on/off helpers for EDIT layer mouse modes.
- Moved `EDIT` to layer 4 so toggled Mouse/Scroll layers can sit above it while held.
- Updated Keyball trackball automouse, scroll, and snipe layer targets after the layer reorder.
- Added vertical/horizontal scroll mode selection on `SCROLL` layer positions 19 and 20.
- Added SNIPE toggle access on MOUSE layer position 32.
- Moved `SNIPE` directly above `MOUSE` so transparent SNIPE keys fall through to mouse controls.
- Increased default PMW3610 CPI to `1600`.
- Added a MOUSE-layer exit macro that clears `SNIPE`, `HSCROLL`, `SCROLL`, and `MOUSE`.
- Added a MOUSE-layer scroll hold macro that clears `HSCROLL` on release.
- Mirrored the right-hand MOUSE layer controls onto the left hand and copied them onto SNIPE/SCROLL/HSCROLL to prevent base-layer fallthrough.
- Made vertical and horizontal scroll mode macros mutually exclusive.
- Changed scroll mode selection to a single mirrored toggle key.
- Moved mouse-mode scroll toggle to `R`/`E` and default exit to `N`/`I`.
- Moved mouse-mode SNIPE toggle to `L`/`U`.
- Added hold behavior on the scroll toggle for temporary both-axis scroll.
- Added `BSCROLL` as a both-axis PMW3610 scroll layer.
- Updated num layer
- Removed backspace combo

### Commit: Refine Keyball layout, layers, and combos

- Added Totem-style GUI/Ctrl/Alt Tab switching macros and `SWITCH` layer.
- Added switch combos for GUI/Ctrl/Alt next and previous tab switching.
- Added `OPTIONS` layer on hold for positions 0 and 11 with bootloader, reset, external power, and Bluetooth controls.
- Bound GUI next directly to position 37 and Ctrl next directly to position 24.
- Changed home-row modifier combos from held keypresses to sticky modifiers.
- Updated bootloader combos:
  - Left: `26 + 27 + 28 + 29 + 40`.
  - Right: `30 + 31 + 32 + 33 + 41`.
  - Increased bootloader combo timeout to `500ms`.
- Added mouse and scroll layer combos:
  - `39 + 28` -> `MOUSE`.
  - `39 + 27` -> `SCROLL`.
- Added EDIT-layer mouse and scroll access:
  - Hold `39`, then hold `28` -> `MOUSE`.
  - Hold `39`, then hold `27` -> `SCROLL`.
- Added direct `SYM` layer access on position 41.
- Documented that bootloader combos affect the central half; use `SCROLL` layer `BOT` keys for source-specific bootloader access.
- Disabled the left bracket symbol combos that conflicted with mouse/scroll combos.
- Updated mouse layer arrow positions.
- Updated `EDIT` layer to use `&none` fallthrough blockers and sticky Shift positions.
- Added NUM access by holding positions 12 or 23.
- Reworked `NUM` layer with mirrored number clusters.
- Updated number orientation.
- Adjusted base punctuation positions toward the QMK Mogi layout.
- Added home-row modifier combos using thumb anchors:
  - `TH2 + N/R/T/S` -> Ctrl/GUI/Alt/Shift.
  - `TH5 + H/A/E/I` -> Shift/Alt/GUI/Ctrl.
- Added `R + S` combo for Enter.
- Added `EDIT` layer, activated by holding position 39 or 42.
- Moved Enter, Escape, Tab, Backspace, and Delete access onto the `EDIT` layer.
- Removed symbol combos that overlapped with the new modifier combos.
