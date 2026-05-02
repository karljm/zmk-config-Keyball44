# KEYBALL44 ZMK Firmware Reference

## Physical Layout

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

## Layers

| ID | Label | Access |
|----|-------|--------|
| 0 | DEFAULT / QWRT | Base layer |
| 1 | NUM | Hold position 38 |
| 2 | FUN | From NUM: position 12 or 23 |
| 3 | EDIT | Hold position 39 or 42 |
| 4 | MOUSE | `&to MOUSE`, combo 38 + 28 |
| 5 | SNIPE | Hold combo 13 + 16, combo 38 + 37, or toggles from mouse layers |
| 6 | SCROLL | Hold position 40, hold combo 14 + 16, combo 38 + 15, mouse-layer scroll key |
| 7 | HSCROLL | Combo 38 + 26 |
| 8 | BSCROLL | Hold scroll selector |
| 9 | SETTING | Combo 42 + 43 |
| 10 | SWITCH | Internal app-switching layer |
| 11 | OPTIONS | Hold position 0 or 11 |

### DEFAULT Layer (QWRT)

```
┌────┬───┬───┬───┬───┬───┐               ┌───┬───┬───┬───┬───┬────┐
│OPT │ B │ L │ D │ W │ ! │               │ ? │ F │ O │ U │ J │OPT │
├────┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼────┤
│ /  │ N │ R │ T │ S │ G │               │ Y │ H │ A │ E │ I │    │
├────┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼────┤
│CTN │ Q │ X │ M │ C │ V │               │ K │ P │ . │ , │ ; │SFT │
└────┼───┼───┼───┼───┼───┼───┐       ┌───┼───┼───┼───┴───┼───┼────┘
     │ATN│GUN│   │NUM│SPC│TAB│       │   │EDT│   │   ●   │MOU│
     │   │   │   │   │EDT│SCR│       │   │   │   │       │   │
     └───┴───┘   └───┴───┴───┘       └───┴───┘   └───────┴───┘
```

| Position | Binding |
|----------|---------|
| 0, 11 | Hold OPTIONS |
| 12 | `/` |
| 23, 41 | None |
| 24 | Ctrl next app/tab macro |
| 35 | Right Shift |
| 36 | Alt next app/tab macro |
| 37 | GUI next app/tab macro |
| 38 | Hold NUM, clears NUM/FUN on release |
| 39 | Space / hold EDIT |
| 40 | Hold SCROLL |
| 42 | Hold EDIT, clears mouse/scroll toggles on release |
| 43 | To MOUSE |

### NUM Layer

```
┌───┬───┬───┬───┬───┬───┐               ┌───┬───┬───┬───┬───┬───┐
│   │   │ 9 │ 8 │ 7 │   │               │   │ 7 │ 8 │ 9 │   │   │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│FUN│ 0 │ 3 │ 2 │ 1 │   │               │   │ 1 │ 2 │ 3 │ 0 │FUN│
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│   │   │ 6 │ 5 │ 4 │   │               │   │ 4 │ 5 │ 6 │   │   │
└───┼───┼───┼───┼───┼───┼───┐       ┌───┼───┼───┼───┴───┼───┼───┘
    │   │   │   │   │   │   │       │   │   │   │   ●   │   │
    └───┴───┘   └───┴───┴───┘       └───┴───┘   └───────┴───┘
```

Positions 12 and 23 toggle FUN on. Releasing the NUM hold clears both NUM and FUN.

### FUN Layer

```
┌───┬───┬───┬───┬───┬───┐               ┌───┬───┬───┬───┬───┬───┐
│   │F12│F9 │F8 │F7 │   │               │   │F7 │F8 │F9 │F12│   │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│   │F10│F3 │F2 │F1 │   │               │   │F1 │F2 │F3 │F10│   │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│   │F11│F6 │F5 │F4 │   │               │   │F4 │F5 │F6 │F11│   │
└───┼───┼───┼───┼───┼───┼───┐       ┌───┼───┼───┼───┴───┼───┼───┘
    │   │   │   │   │   │   │       │   │   │   │   ●   │   │
    └───┴───┘   └───┴───┴───┘       └───┴───┘   └───────┴───┘
```

### EDIT Layer

```
┌───┬───┬───┬───┬───┬───┐               ┌───┬───┬───┬───┬───┬───┐
│   │   │   │   │   │   │               │   │   │   │   │   │   │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│   │SFT│ESC│TAB│ENT│   │               │   │BSP│DEL│   │SFT│   │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│   │CTL│GUI│ALT│SFT│   │               │ <-│ v │ ^ │ ->│   │   │
└───┼───┼───┼───┼───┼───┼───┐       ┌───┼───┼───┼───┴───┼───┼───┘
    │   │   │   │   │   │   │       │   │   │   │   ●   │   │
    └───┴───┘   └───┴───┴───┘       └───┴───┘   └───────┴───┘
```

`SFT`, `CTL`, `GUI`, and `ALT` are sticky modifiers.

### MOUSE / SNIPE Layers

MOUSE and SNIPE currently share the same key bindings. SNIPE changes trackball CPI through the PMW3610 driver.

```
┌───┬───┬───┬───┬───┬───┐               ┌───┬───┬───┬───┬───┬───┐
│   │   │   │MC │   │   │               │   │   │MC │   │   │   │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│   │SNP│TO0│SCR│LC │   │               │   │LC │SCR│TO0│SNP│   │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│   │   │MB4│MB5│RC │   │               │   │RC │MB4│   │   │   │
└───┼───┼───┼───┼───┼───┼───┐       ┌───┼───┼───┼───┴───┼───┼───┘
    │   │   │   │   │   │   │       │   │   │   │   ●   │MOU│
    └───┴───┘   └───┴───┴───┘       └───┴───┘   └───────┴───┘
```

| Label | Output |
|-------|--------|
| LC / RC / MC | Left / right / middle click |
| MB4 / MB5 | Mouse button 4 / 5 |
| SCR | Tap vertical scroll mode, hold both-axis scroll |
| SNP | Toggle SNIPE on |
| TO0 | Clear mouse/scroll/snipe layers and return to DEFAULT |
| MOU | Stay on MOUSE |

### SCROLL / HSCROLL / BSCROLL Layers

SCROLL, HSCROLL, and BSCROLL currently share the same key bindings. Trackball behavior differs by active layer.

```
┌───┬───┬───┬───┬───┬───┐               ┌───┬───┬───┬───┬───┬───┐
│   │   │   │MC │   │   │               │   │   │MC │   │   │   │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│   │SNP│TO0│HSC│LC │   │               │   │LC │HSC│TO0│SNP│   │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│   │   │MB4│MB5│RC │   │               │   │RC │MB4│   │   │   │
└───┼───┼───┼───┼───┼───┼───┐       ┌───┼───┼───┼───┴───┼───┼───┘
    │   │   │   │   │   │   │       │   │   │   │   ●   │MOU│
    └───┴───┘   └───┴───┴───┘       └───┴───┘   └───────┴───┘
```

`HSC` taps horizontal scroll mode and holds both-axis scroll.

### SETTING Layer

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

### SWITCH Layer

Used internally by app-switching macros.

```
┌───┬───┬───┬───┬───┬───┐               ┌───┬───┬───┬───┬───┬───┐
│   │   │   │   │   │   │               │   │   │   │   │   │   │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│   │   │ESC│PVT│TAB│   │               │   │TAB│PVT│ESC│   │   │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│   │   │ESC│PVT│TAB│   │               │   │TAB│PVT│ESC│   │   │
└───┼───┼───┼───┼───┼───┼───┐       ┌───┼───┼───┼───┴───┼───┼───┘
    │   │   │   │   │   │   │       │   │   │   │   ●   │   │
    └───┴───┘   └───┴───┴───┘       └───┴───┘   └───────┴───┘
```

`PVT` is Shift+Tab.

### OPTIONS Layer

```
┌───┬───┬───┬───┬───┬───┐               ┌───┬───┬───┬───┬───┬───┐
│   │   │   │   │   │BOT│               │BOT│   │   │   │   │   │
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│RST│CLR│BT0│BT1│BT2│   │               │   │   │   │   │   │RST│
├───┼───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┼───┤
│EPO│   │   │   │   │   │               │   │   │   │   │   │EPN│
└───┼───┼───┼───┼───┼───┼───┐       ┌───┼───┼───┼───┴───┼───┼───┘
    │   │   │   │   │   │   │       │   │   │   │   ●   │   │
    └───┴───┘   └───┴───┴───┘       └───┴───┘   └───────┴───┘
```

| Label | Output |
|-------|--------|
| BOT | Bootloader |
| RST | System reset |
| EPO / EPN | External power off / on |
| CLR | Clear Bluetooth bonds |
| BT0-BT2 | Select Bluetooth profile |

## Combos

Combos with `layers = <0>` are active on DEFAULT only.

### Layer / System Combos

| Name | Positions | Output |
|------|-----------|--------|
| To Default | 19 + 20 + 21 | `&to 0` |
| Escape | 19 + 20 | Escape |
| Z | 3 + 4 | Z |
| Bootloader L | 26 + 27 + 28 + 29 + 40 | Bootloader |
| Bootloader R | 30 + 31 + 32 + 33 + 41 | Bootloader |
| SETTING | 42 + 43 | Momentary SETTING |
| MOUSE | 38 + 28 | Momentary MOUSE |
| SCROLL hold | 14 + 16 | Momentary SCROLL |
| SCROLL | 38 + 15 | Toggle SCROLL on |
| HSCROLL | 38 + 26 | Toggle HSCROLL on |
| SNIPE hold | 13 + 16 | Momentary SNIPE |
| SNIPE | 38 + 37 | Momentary SNIPE |

### Modifier Combos

| Modifier | Positions | Output |
|----------|-----------|--------|
| Left GUI | 39 + 14 | Sticky quick-release LGUI |
| Left Shift | 39 + 16 | Sticky quick-release Left Shift |
| Left Ctrl | 39 + 13 | Sticky quick-release LCTRL |
| Left Alt | 39 + 15 | Sticky quick-release LALT |
| Right GUI | 42 + 21 | Sticky quick-release RGUI |
| Right Shift | 42 + 19 | Sticky quick-release Right Shift |
| Right Ctrl | 42 + 22 | Sticky quick-release RCTRL |
| Right Alt | 42 + 20 | Sticky quick-release RALT |

### Switching Combos

| Action | Positions | Output |
|--------|-----------|--------|
| GUI next | 14 + 16 + 39 | GUI + Tab |
| Ctrl next | 13 + 16 + 39 | Ctrl + Tab |
| Alt next | 26 + 28 + 39 | Alt + Tab |
| Alt next | 32 + 28 | Alt + Tab |
| Alt previous | 32 + 27 | Alt + Shift+Tab |
| Ctrl next | 31 + 28 | Ctrl + Tab |
| Ctrl previous | 31 + 27 | Ctrl + Shift+Tab |
| GUI next | 33 + 28 | GUI + Tab |
| GUI previous | 33 + 27 | GUI + Shift+Tab |

### Symbol Combos

| Symbol | Positions |
|--------|-----------|
| `[` | 7 + 9 |
| `]` | 7 + 10 |
| `(` | 19 + 21 |
| `)` | 19 + 22 |
| `{` | 31 + 33 |
| `}` | 31 + 34 |
| `+` | 27 + 28 |
| `-` | 26 + 27 |
| `*` | 25 + 28 |
| `%` | 26 + 28 |
| `=` | 31 + 32 |
| `_` | 32 + 33 |
| `'` | 20 + 21 |
| `"` | 8 + 9 |
| `#` | 39 + 2 |
| `~` | 39 + 3 |
| `` ` `` | 39 + 9 |
| `\` | 39 + 25 |
| `<` | 39 + 27 |
| `>` | 39 + 28 |
| `|` | 42 + 7 |
| `&` | 42 + 8 |
| `^` | 42 + 31 |
| `$` | 42 + 32 |
| `:` | 42 + 33 |
| `@` | 42 + 34 |

### Thumb Symbol Combo Diagram

Hold/tap the thumb shown as `TH` with the marked key to output the symbol in that key position.

Left thumb symbols use position 39:

```
┌───┬────┬────┬────┬───┬───┐               ┌───┬───┬───┬────┬───┬───┐
│   │    │ #  │ ~  │   │   │               │   │   │   │ `  │   │   │
├───┼────┼────┼────┼───┼───┤               ├───┼───┼───┼────┼───┼───┤
│   │    │    │    │   │   │               │   │   │   │    │   │   │
├───┼────┼────┼────┼───┼───┤               ├───┼───┼───┼────┼───┼───┤
│   │ \\ │    │ <  │ > │   │               │   │   │   │    │   │   │
└───┼────┼────┼────┼───┼───┼───┐       ┌───┼───┼───┼────┴───┼───┼───┘
    │   │    │    │   │TH │   │       │   │   │   │   ●    │   │
    └───┴────┘    └───┴───┴───┘       └───┴───┘   └────────┴───┘
```

Right thumb symbols use position 42:

```
┌───┬───┬───┬───┬───┬───┐               ┌───┬────┬────┬───┬───┬───┐
│   │   │   │   │   │   │               │   │ |  │ &  │   │   │   │
├───┼───┼───┼───┼───┼───┤               ├───┼────┼────┼───┼───┼───┤
│   │   │   │   │   │   │               │   │    │    │   │   │   │
├───┼───┼───┼───┼───┼───┤               ├───┼────┼────┼───┼───┼───┤
│   │   │   │   │   │   │               │   │ ^  │ $  │ : │ @ │   │
└───┼───┼───┼───┼───┼───┼───┐       ┌───┼───┼────┼────┴───┼───┼───┘
    │   │   │   │   │   │   │       │   │TH │    │   ●   │   │
    └───┴───┘   └───┴───┴───┘       └───┴───┘    └───────┴───┘
```

| Thumb | Symbol | Combo Positions |
|-------|--------|-----------------|
| 39 | `#` | 39 + 2 |
| 39 | `~` | 39 + 3 |
| 39 | `` ` `` | 39 + 9 |
| 39 | `\` | 39 + 25 |
| 39 | `<` | 39 + 27 |
| 39 | `>` | 39 + 28 |
| 42 | `|` | 42 + 7 |
| 42 | `&` | 42 + 8 |
| 42 | `^` | 42 + 31 |
| 42 | `$` | 42 + 32 |
| 42 | `:` | 42 + 33 |
| 42 | `@` | 42 + 34 |

## Trackball

| Setting | Value |
|---------|-------|
| CPI | 2400 |
| CPI divisor | 2 |
| SNIPE CPI | 800 |
| SNIPE divisor | 4 |
| Scroll tick | 32 |
| Automouse layer | MOUSE / layer 4 |
| Scroll layers | SCROLL, HSCROLL, BSCROLL |
| SNIPE layer | SNIPE / layer 5 |
| Normal X scale | 1/1 |
| Normal Y scale | 3/4 |

Scroll layer overrides zero the unused wheel axis with input processors.

## Custom Behaviors

| Behavior | Purpose |
|----------|---------|
| `edit_hold_cleanup` | Holds EDIT, then clears mouse/scroll toggles on release |
| `num_hold_cleanup` | Holds NUM, then clears FUN and NUM on release |
| `mouse_to_default` | Clears mouse/scroll/snipe layers and returns to DEFAULT |
| `scroll_vertical_or_both` | Tap vertical scroll, hold BSCROLL |
| `scroll_horizontal_or_both` | Tap horizontal scroll, hold BSCROLL |
| `skq` | Sticky key with quick release |
| `tog_on` / `tog_off` | Toggle-layer helpers forced on/off |

### Mod-Morphs

Defined but not used on the base layer:

| Behavior | Normal | Shifted |
|----------|--------|---------|
| `cmqus` | `,` | `?` |
| `dtsmi` | `.` | `;` |

### Caps Word

Caps Word is configured to continue through `UNDERSCORE` and `MINUS`, but no key currently invokes `&caps_word`.

## Timing

| Behavior | Tapping term | Flavor | Quick tap |
|----------|--------------|--------|-----------|
| `&lt` | 240ms | balanced | 150ms |
| `&mt` | 200ms | tap-preferred | 150ms |
| `edit_lt` | 240ms | balanced | 150ms |
| scroll hold-taps | 240ms | balanced | 150ms |
