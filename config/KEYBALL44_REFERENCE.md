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
│OPT│   │   │   │   │   │               │   │   │   │   │   │OPT│
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│/NM│ N │ R │ T │ S │ G │               │ Y │ H │ A │ E │ I │'NM│
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│CTN│ / │ X │ M │ C │ V │               │ K │ P │ . │ , │ ; │SFT│
└───┼───┼───┼───┼───┼───┼───┐       ┌───┼───┼───┼───┴───┼───┼───┘
    │GUI│GUN│   │ESC│SPC│TAB│       │SYM│EDT│   │   ●   │MOU│
    │   │   │   │FUN│EDT│SCR│       │   │   │   │       │   │
    └───┴───┘   └───┴───┴───┘       └───┴───┘   └───────┴───┘
```

**Thumb Keys:**
| Position | Key | Tap | Hold |
|----------|-----|-----|------|
| 36 | Left outer | GUI | - |
| 37 | Left outer 2 | GUI next | - |
| 38 | Left middle | Escape | FUN layer |
| 39 | Left inner | Space | EDIT layer |
| 40 | Left inner 2 | Tab | SCROLL layer |
| 41 | Right outer | - | SYM layer |
| 42 | Right inner | - | EDIT layer |
| 43 | Far right | - | TO MOUSE |

**Outer Column Keys:**
| Position | Key |
|----------|-----|
| Top left | Escape / OPTIONS layer |
| Home left | Slash / NUM layer |
| Bottom left | Ctrl next |
| Top right | Backspace / OPTIONS layer |
| Home right | Single Quote |
| Bottom right | Right Shift |

---

### NUM Layer

```
┌───┬───┬───┬───┬───┬───┐               ┌───┬───┬───┬───┬───┬───┐
│   │ 1 │ 2 │ 3 │ 4 │ 5 │               │ 6 │ 7 │ 8 │ 9 │ 0 │   │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│   │   │ 7 │ 8 │ 9 │   │               │   │ 9 │ 8 │ 7 │   │   │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│   │ 0 │ 1 │ 2 │ 3 │   │               │   │ 3 │ 2 │ 1 │ 0 │   │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│   │   │ 4 │ 5 │ 6 │   │               │   │ 6 │ 5 │ 4 │   │   │
└───┼───┼───┼───┼───┼───┼───┐       ┌───┼───┼───┼───┴───┼───┼───┘
    │   │   │   │   │   │   │       │   │   │   │   ●   │   │
    └───┴───┘   └───┴───┴───┘       └───┴───┘   └───────┴───┘
```

**Access:** Hold position 12 or position 23.

---

### SYM Layer

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
| ` | \| | & | ? | ! |
| ~ | " | { | ( | ) |
| ' | < | [ | ] | > |

| Right Hand | | | | |
|------------|---|---|---|---|
| @ | ^ | # | * | $ |
| } | _ | = | + | - |
| : | ; | / | , | . |

### EDIT Layer (hold key 39 or key 42)

```
┌───┬───┬───┬───┬───┬───┐               ┌───┬───┬───┬───┬───┬───┐
│   │   │   │   │   │   │               │   │   │   │   │   │   │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│   │   │ESC│   │   │ENT│               │   │BSP│DEL│   │   │   │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│   │   │   │SCR│MOU│   │               │   │   │   │   │   │   │
└───┼───┼───┼───┼───┼───┼───┐       ┌───┼───┼───┼───┴───┼───┼───┘
    │   │   │   │   │   │   │       │   │   │   │   ●   │   │
    └───┴───┘   └───┴───┴───┘       └───┴───┘   └───────┴───┘
```

| Position | Output |
|----------|--------|
| 14 | Escape |
| 17 | Enter |
| 19 | Backspace |
| 20 | Delete |
| 27 | Toggle Scroll layer while `EDIT` is held |
| 28 | Toggle Mouse layer while `EDIT` is held |

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

### OPTIONS Layer (hold key 0 or key 11)

```
┌───┬───┬───┬───┬───┬───┐               ┌───┬───┬───┬───┬───┬───┐
│BOT│   │   │   │   │   │               │   │   │   │   │   │BOT│
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│RST│CLR│BT0│BT1│BT2│   │               │   │   │   │   │   │RST│
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
| CLR | Clear Bluetooth bonds |
| BT0-BT2 | Select Bluetooth profile |

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
| Left Ctrl | TH2 + N | 39 + 13 | Left Ctrl |
| Left GUI | TH2 + R | 39 + 14 | Left GUI |
| Left Alt | TH2 + T | 39 + 15 | Left Alt |
| Left Shift | TH2 + S | 39 + 16 | Left Shift |

### Modifier Combos (Right Hand)

| Combo | Keys | Positions | Output |
|-------|------|-----------|--------|
| Right Shift | TH5 + H | 42 + 19 | Right Shift |
| Right Alt | TH5 + A | 42 + 20 | Right Alt |
| Right GUI | TH5 + E | 42 + 21 | Right GUI |
| Right Ctrl | TH5 + I | 42 + 22 | Right Ctrl |

### Navigation Combos

| Combo | Keys | Positions | Output |
|-------|------|-----------|--------|
| Enter | R + S | 14 + 16 | Enter |
| To Default | H + A + E | 19 + 20 + 21 | TO layer 0 |

### Switch Combos

| Combo | Keys | Positions | Output |
|-------|------|-----------|--------|
| GUI next | TH2 + N + S | 39 + 13 + 16 | GUI held, Tab tapped, SWITCH layer held |
| GUI previous | TH2 + N + T | 39 + 13 + 15 | GUI held, Shift+Tab tapped, SWITCH layer held |
| Ctrl next | TH2 + R + S | 39 + 14 + 16 | Ctrl held, Tab tapped, SWITCH layer held |
| Ctrl previous | TH2 + R + T | 39 + 14 + 15 | Ctrl held, Shift+Tab tapped, SWITCH layer held |
| Alt next | TH2 + / + S | 39 + 12 + 16 | Alt held, Tab tapped, SWITCH layer held |
| Alt previous | TH2 + / + T | 39 + 12 + 15 | Alt held, Shift+Tab tapped, SWITCH layer held |

### System Combos

| Combo | Keys | Positions | Output |
|-------|------|-----------|--------|
| Bootloader L | X + M + C + V + Tab | 26 + 27 + 28 + 29 + 40 | Bootloader |
| Bootloader R | K + P + . + , + right outer thumb | 30 + 31 + 32 + 33 + 41 | Bootloader on central half |
| Setting Layer | Thumb keys | 42 + 43 | Momentary SETTING |

**Bootloader note:** ZMK combo reset behaviors run on the central half of a split keyboard. For source-specific bootloader access, hold `SCROLL` and press a `BOT` key on the half you want to flash.

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
| NUM | Hold key 12 or key 23 |
| SYM | Hold key 41 |
| FUN | Hold left thumb middle (key 38) |
| MOUSE | TO MOUSE |
| SCROLL | Hold left thumb inner 2 (key 40) / From MOUSE layer |
| SNIPE | No direct access |
| SETTING | Combo: keys 42 + 43 |
| EDIT | Hold key 39 or key 42 |
| OPTIONS | Hold key 0 or key 11 |

---

## ISSUES / TODO

### Missing Features

- [ ] No repeat key
- [ ] No caps word key assigned
- [ ] SNIPE layer is empty
- [ ] Mod-morph behaviors defined but not used

### Potential Improvements

1. Add `&key_repeat` to a thumb key
2. Add `&caps_word` access
3. Add one-shot modifiers (`&sk`) to combos
4. Populate SNIPE layer for precision trackball
5. Add navigation combos (word jump, home/end)

---

## QUICK REFERENCE

### Most Used Keys

| Action | Location |
|--------|----------|
| GUI next | Left outer 2 |
| Ctrl next | Left bottom outer |
| Space | Left thumb inner (tap) |
| Enter | R + S combo or EDIT layer position 17 |
| Backspace | Top right or EDIT layer position 19 |
| Escape | Left thumb middle tap, top left, or EDIT layer position 14 |
| Tab | Left thumb inner 2 tap |

### Layer Access

| Layer | Hold Key |
|-------|----------|
| OPTIONS | Escape or Backspace |
| SYM | Right outer thumb |
| EDIT | Left thumb Space or right thumb inner |
| FUN | Left thumb Escape |
| SCROLL | Left thumb Tab |

### Quick Modifiers (Combos)

| Modifier | Left Hand | Right Hand |
|----------|-----------|------------|
| Shift | TH2 + S | TH5 + H |
| Ctrl | TH2 + N | TH5 + I |
| Alt | TH2 + T | TH5 + A |
| GUI | TH2 + R | TH5 + E |
