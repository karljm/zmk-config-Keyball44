# Changes

Use this file to track layout and behavior changes as the Keyball config evolves.

## Unreleased

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
- Added conditional `EDIT` -> `SCROLL`/`MOUSE` sublayers so tapping positions 27 or 28 in `EDIT` latches those layers only while `EDIT` remains held.
- Added alt next key
- Swapped orientation of nums for right hand
- Removed backspace combo
- Removed symbol combos that overlapped with the new modifier combos.
