# KEYBALL44 ZMK Firmware Visual Reference

## Physical Layout (44 keys + trackball)

```
┌───┬───┬───┬───┬───┬───┐               ┌───┬───┬───┬───┬───┬───┐
│ 0 │ 1 │ 2 │ 3 │ 4 │ 5 │               │ 6 │ 7 │ 8 │ 9 │10 │11 │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│12 │13 │14 │15 │16 │17 │               │18 │19 │20 │21 │22 │23 │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│24 │25 │26 │27 │28 │29 │               │30 │31 │32 │33 │34 │35 │
└───┼───┼───┼───┼───┼───┼───┐       ┌───┼───┼───┼───┴───┼───┼───┘
    │36 │37 │   │38 │39 │40 │       │41 │42 │   │   ●   │43 │
    └───┴───┘   └───┴───┴───┘       └───┴───┘   └───────┴───┘
```

---

## LAYERS

### DEFAULT Layer (QWRT)

```
┌───┬───┬───┬───┬───┬───┐               ┌───┬───┬───┬───┬───┬───┐
│ESC│ B │ L │ D │ W │ Z │               │   │ F │ O │ U │ J │BSP│
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│CTL│ N │ R │ T │ S │ G │               │ Y │ H │ A │ E │ I │ ' │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│SFT│ Q │ X │ M │ C │ V │               │ K │ P │ , │ . │ / │SFT│
└───┼───┼───┼───┼───┼───┼───┐       ┌───┼───┼───┼───┴───┼───┼───┘
    │GUI│ALT│   │ESC│SPC│TAB│       │ENT│BSP│   │   ●   │MOU│
    │   │   │   │FUN│MOU│SCR│       │   │SYM│   │       │   │
    └───┴───┘   └───┴───┴───┘       └───┴───┘   └───────┴───┘
```

**Thumb Keys:**
| Position | Key | Tap | Hold |
|----------|-----|-----|------|
| 36 | Left outer | GUI | - |
| 37 | Left outer 2 | Alt | - |
| 38 | Left middle | Escape | FUN layer |
| 39 | Left inner | Space | MOUSE layer |
| 40 | Left inner 2 | Tab | SCROLL layer |
| 41 | Right outer | Enter | - |
| 42 | Right inner | Backspace | SYM layer |
| 43 | Far right | - | TO MOUSE |

**Outer Column Keys:**
| Position | Key |
|----------|-----|
| Top left | Escape |
| Home left | Left Ctrl |
| Bottom left | Left Shift |
| Top right | Backspace |
| Home right | Single Quote |
| Bottom right | Right Shift |

---

### NUM Layer

```
┌───┬───┬───┬───┬───┬───┐               ┌───┬───┬───┬───┬───┬───┐
│   │ 1 │ 2 │ 3 │ 4 │ 5 │               │ 6 │ 7 │ 8 │ 9 │ 0 │   │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│   │ ← │ ↓ │ ↑ │ → │   │               │   │   │   │   │   │   │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│   │   │   │   │   │   │               │   │   │   │   │   │   │
└───┼───┼───┼───┼───┼───┼───┐       ┌───┼───┼───┼───┴───┼───┼───┘
    │   │   │   │   │   │   │       │   │   │   │   ●   │   │
    └───┴───┘   └───┴───┴───┘       └───┴───┘   └───────┴───┘
```

**Note:** Currently no thumb access to NUM layer. Arrow keys on left home row.

---

### SYM Layer (hold right thumb inner)

```
┌───┬───┬───┬───┬───┬───┐               ┌───┬───┬───┬───┬───┬───┐
│ ` │ | │ & │ ? │ ! │ @ │               │ ^ │ # │ * │ $ │ \ │   │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│ ~ │ " │ { │ ( │ ) │ } │               │ _ │ = │ + │ - │ % │   │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│   │ ' │ < │ [ │ ] │ > │               │ : │ ; │ / │ , │ . │   │
└───┼───┼───┼───┼───┼───┼───┐       ┌───┼───┼───┼───┴───┼───┼───┘
    │   │   │   │   │   │   │       │   │   │   │   ●   │   │
    └───┴───┘   └───┴───┴───┘       └───┴───┘   └───────┴───┘
```

**Available Symbols:**

| Left Hand | | | | |
|-----------|---|---|---|---|
| & | \| | # | * | |
| ~ | { | } | _ | |
| < | > | ^ | $ | |

| Right Hand | | | | |
|------------|---|---|---|---|
| ! | ? | @ | | |
| ; | [ | ] | ` | |
| = | | | | |

**Missing Symbols:** `( ) + - \ : " %`

---

### FUN Layer (hold left thumb middle)

```
┌───┬───┬───┬───┬───┬───┐               ┌───┬───┬───┬───┬───┬───┐
│   │F1 │F2 │F3 │F4 │   │               │   │   │   │   │   │   │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│   │F5 │F6 │F7 │F8 │   │               │   │   │   │   │   │   │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│   │F9 │F10│F11│F12│   │               │   │   │   │   │   │   │
└───┼───┼───┼───┼───┼───┼───┐       ┌───┼───┼───┼───┴───┼───┼───┘
    │   │   │   │   │   │   │       │   │mo3│   │   ●   │   │
    └───┴───┘   └───┴───┴───┘       └───┴───┘   └───────┴───┘
```

---

### MOUSE Layer (hold left thumb inner)

```
┌───┬───┬───┬───┬───┬───┐               ┌───┬───┬───┬───┬───┬───┐
│   │ 1 │ 2 │ 3 │ 4 │ 5 │               │ 6 │ 7 │ 8 │ 9 │ 0 │TO0│
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│   │ ← │ ↓ │ ↑ │ → │   │               │PGU│LC │SCR│RC │MC │   │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│   │   │   │   │   │   │               │PGD│MB4│   │MB5│   │   │
└───┼───┼───┼───┼───┼───┼───┐       ┌───┼───┼───┼───┴───┼───┼───┘
    │   │   │   │   │   │   │       │   │   │   │   ●   │MOU│
    └───┴───┘   └───┴───┴───┘       └───┴───┘   └───────┴───┘
```

| Key | Description |
|-----|-------------|
| LC | Left Click |
| RC | Right Click |
| MC | Middle Click |
| MB4 | Mouse Button 4 (Back) |
| MB5 | Mouse Button 5 (Forward) |
| SCR | Momentary SCROLL layer |
| PGU | Page Up |
| PGD | Page Down |
| TO0 | Return to DEFAULT layer |

---

### SCROLL Layer (hold left thumb inner 2)

```
┌───┬───┬───┬───┬───┬───┐               ┌───┬───┬───┬───┬───┬───┐
│BOT│   │   │   │   │   │               │   │   │   │   │   │BOT│
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│RST│   │   │   │   │   │               │   │   │   │   │   │RST│
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│EPO│   │   │   │   │   │               │   │   │   │   │   │EPN│
└───┼───┼───┼───┼───┼───┼───┐       ┌───┼───┼───┼───┴───┼───┼───┘
    │   │   │   │   │   │   │       │   │   │   │   ●   │   │
    └───┴───┘   └───┴───┴───┘       └───┴───┘   └───────┴───┘
```

| Key | Description |
|-----|-------------|
| BOT | Bootloader |
| RST | System Reset |
| EPO | External Power Off |
| EPN | External Power On |

**Note:** This layer controls trackball scroll mode when held.

---

### SNIPE Layer

```
┌───┬───┬───┬───┬───┬───┐               ┌───┬───┬───┬───┬───┬───┐
│   │   │   │   │   │   │               │   │   │   │   │   │   │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│   │   │   │   │   │   │               │   │   │   │   │   │   │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│   │   │   │   │   │   │               │   │   │   │   │   │   │
└───┼───┼───┼───┼───┼───┼───┐       ┌───┼───┼───┼───┴───┼───┼───┘
    │   │   │   │   │   │   │       │   │   │   │   ●   │   │
    └───┴───┘   └───┴───┴───┘       └───┴───┘   └───────┴───┘
```

**Note:** All transparent - currently unused. Intended for precision trackball movement.

---

### SETTING Layer (combo access)

```
┌───┬───┬───┬───┬───┬───┐               ┌───┬───┬───┬───┬───┬───┐
│   │   │   │   │   │   │               │   │   │   │   │   │   │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│   │CLR│BT0│BT1│BT2│   │               │   │   │   │   │   │   │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│   │   │   │   │   │   │               │   │   │   │   │   │   │
└───┼───┼───┼───┼───┼───┼───┐       ┌───┼───┼───┼───┴───┼───┼───┘
    │   │   │   │   │   │   │       │   │   │   │   ●   │   │
    └───┴───┘   └───┴───┴───┘       └───┴───┘   └───────┴───┘
```

| Key | Description |
|-----|-------------|
| CLR | Clear Bluetooth bonds |
| BT0 | Select Bluetooth profile 0 |
| BT1 | Select Bluetooth profile 1 |
| BT2 | Select Bluetooth profile 2 |

**Access:** Combo keys 42 + 43 (right thumb keys)

---

## COMBOS

### Key Position Reference

```
┌───┬───┬───┬───┬───┬───┐               ┌───┬───┬───┬───┬───┬───┐
│ 0 │ 1 │ 2 │ 3 │ 4 │ 5 │               │ 6 │ 7 │ 8 │ 9 │10 │11 │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│12 │13 │14 │15 │16 │17 │               │18 │19 │20 │21 │22 │23 │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│24 │25 │26 │27 │28 │29 │               │30 │31 │32 │33 │34 │35 │
└───┼───┼───┼───┼───┼───┼───┐       ┌───┼───┼───┼───┴───┼───┼───┘
    │36 │37 │   │38 │39 │40 │       │41 │42 │   │   ●   │43 │
    └───┴───┘   └───┴───┴───┘       └───┴───┘   └───────┴───┘
```

### Modifier Combos (Left Hand)

| Combo | Keys | Positions | Output |
|-------|------|-----------|--------|
| Left GUI | X + M | 26 + 27 | Left GUI |
| Left Shift | R + S | 14 + 16 | Left Shift |
| Left Ctrl | M + C | 27 + 28 | Left Ctrl |
| Left Alt | X + C | 26 + 28 | Left Alt |

### Modifier Combos (Right Hand)

| Combo | Keys | Positions | Output |
|-------|------|-----------|--------|
| Right GUI | P + , | 31 + 32 | Right GUI |
| Right Shift | H + E | 19 + 21 | Right Shift |
| Right Ctrl | , + . | 32 + 33 | Right Ctrl |
| Right Alt | P + . | 31 + 33 | Right Alt |

### Navigation Combos

| Combo | Keys | Positions | Output |
|-------|------|-----------|--------|
| To Default | H + A + E | 19 + 20 + 21 | TO layer 0 |

### System Combos

| Combo | Keys | Positions | Output |
|-------|------|-----------|--------|
| Bootloader L | Q + X + M + C + V | 25 + 26 + 27 + 28 + 29 | Bootloader |
| Bootloader R | K + P + , + . + / | 30 + 31 + 32 + 33 + 34 | Bootloader |
| Setting Layer | Thumb keys | 42 + 43 | Momentary SETTING |

---

## CUSTOM BEHAVIORS

### Mod-Morphs (defined but not used on base layer)

| Behavior | Tap | Shift+Tap |
|----------|-----|-----------|
| cmqus | , | ? |
| dtsmi | . | ; |

### Caps Word

Enabled with configuration:
- Continues with: `UNDERSCORE`, `MINUS`
- Deactivates on: space, punctuation, etc.

**Access:** Currently no key assigned. Add `&caps_word` to use.

---

## HOLD-TAP SETTINGS

### Layer-Tap (&lt)

| Setting | Value |
|---------|-------|
| Tapping term | 240ms |
| Flavor | Balanced |
| Quick tap | 150ms |

### Mod-Tap (&mt)

| Setting | Value |
|---------|-------|
| Tapping term | 200ms |
| Flavor | Tap-preferred |
| Quick tap | 150ms |

---

## LAYER ACCESS SUMMARY

| Layer | Access Method |
|-------|---------------|
| DEFAULT | Base layer / TO 0 |
| NUM | No direct access |
| SYM | Hold right thumb inner (key 42) |
| FUN | Hold left thumb middle (key 38) |
| MOUSE | Hold left thumb inner (key 39) / TO MOUSE |
| SCROLL | Hold left thumb inner 2 (key 40) / From MOUSE layer |
| SNIPE | No direct access |
| SETTING | Combo: keys 42 + 43 |

---

## ISSUES / TODO

### Missing Features

- [ ] No NUM layer access on thumbs
- [ ] No repeat key
- [ ] No caps word key assigned
- [ ] Parentheses `( )` missing from SYM layer
- [ ] Plus `+` and minus `-` missing from SYM layer
- [ ] Backslash `\` missing from SYM layer
- [ ] Colon `:` missing from SYM layer
- [ ] Double quote `"` missing from SYM layer
- [ ] Percent `%` missing from SYM layer
- [ ] SNIPE layer is empty
- [ ] Enter has no hold function (wasted potential)
- [ ] Mod-morph behaviors defined but not used

### Potential Improvements

1. Add `&key_repeat` to a thumb key
2. Add `&caps_word` access
3. Add NUM layer to a thumb hold
4. Complete the SYM layer with missing symbols
5. Add one-shot modifiers (`&sk`) to combos
6. Populate SNIPE layer for precision trackball
7. Add navigation combos (word jump, home/end)

---

## QUICK REFERENCE

### Most Used Keys

| Action | Location |
|--------|----------|
| Space | Left thumb inner (tap) |
| Enter | Right thumb outer |
| Backspace | Right thumb inner (tap) or top right |
| Escape | Left thumb middle (tap) or top left |
| Tab | Left thumb inner 2 (tap) |

### Layer Access

| Layer | Hold Key |
|-------|----------|
| SYM | Right thumb Backspace |
| FUN | Left thumb Escape |
| MOUSE | Left thumb Space |
| SCROLL | Left thumb Tab |

### Quick Modifiers (Combos)

| Modifier | Left Hand | Right Hand |
|----------|-----------|------------|
| Shift | R + S | H + E |
| Ctrl | M + C | , + . |
| Alt | X + C | P + . |
| GUI | X + M | P + , |
