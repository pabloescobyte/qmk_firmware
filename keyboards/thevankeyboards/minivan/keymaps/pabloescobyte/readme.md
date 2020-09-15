# PabloEscobyte's minivan layout

My personal minivan layout is built specifically for my day-to-day work in mac OS catalina with a catalyst (hotswap) PCB and tthe arrow layout.



## Base layer

The base layer is pretty simple, straight qwerty layout where available. Of note: /? is to the right of the arrow keys. Yes this is kinda weird sometimes, but you get used to it. Tab is tab when pressed and fn2 when held, Enter is the same. GESC is esc when used alone, but ~ when shifted. Tapping FN 1 is space
```
|TAB | Q  | W  | E  | R  | T  | Y  | U  | I  | O  | P  |BKSP|
|L1ES| A  | S  | D  | F  | G  | H  | J  | K  | L  | ;  |ENTR|
|SHFT| Z  | X  | C  | V  | B  | N  | M  | ,  | .  | UP | /  |
|LCTL|LGUI|LALT|   L2/SPACE   |   MLT3  |L4/;|LEFT|DOWN|RGHT|
```

I use the key immediately before Q as TAB instead of ESC like most people would. I find this is easier since accidentally hitting TAB isn't as annoying as accidentally hitting ESC and prematurely escaping out of something you didn't mean to. I've mapped ESC to be output when you tap CAPSLOCK otherwise holding it down toggles Layer 1.

The left SPACEBAR momentarily toggles Layer 2, the Numerics/Symbols and F-key row, if held down otherwise it's outputs SPACE as usual.
The right SPACEBAR momentarily toggles Layer 3, which is the mouse cursor layer.

Layer 3 has the mouse cursor movement mapped to IJKL, 



## Navigation layer (1)

This layer has the numrow as well as swapping the arrow keys for a nav cluster, and swapping ;: for '" and /? for \|. With that almost all of the missing keys are accounted for.

```
|ABT |ALA | UP |ARA |HOME|PGUP|VOLU| {  | }  | _  | +  | DEL|
|    |LEFT|DOWN|RGHT|END |PGDN|VOLD| [  | ]  | -  | =  | ;  |
|    |SALA|SARA|COPY|PAST|CUT |MUTE| (  | )  | <  | >  | \  |
|    |    |CST |     CT       |   CMT   |    | ~  | `  |PIPE| 
```

ARROW CLUSTER
WASD is mapped to the arrow keys. Even though there are already dedicated arrow keys on the bottom-right of the keyboard having the arrow keys under WASD allows me to navigate using only my left hand leaving my right hand to stay on the mouse/trackpad to click.

NAVIGATION CLUSTER
The navigation keys HOME/END and PGUP/PGDN are on R/F and T/G respectively. I chose these four because F usually has the home row bar so I can navigate by feel alone. This also keeps the keys far enough away from WASD that I don't hit them accidentally but not so far that I overextend my index finger to actuate.

BRACKETS AND CODING OPERANDS
For writing code I put the curly braces, square brackets and parentheses on the right side.
With J in the home row acting as my jumping off point I know exactly where the brackets are.

The operands are all around the top right cluster and the semi-colon right under ENTER. This speeds up work where I need to end with a semi colon and start a new line.

Having the equals sign and greater than symbol right atop one another makes it easy for me to output "=>" with two quick keystrokes: CAPSLOCK + APOSTROPHE then CAPSLOCK + UP.

On a regular keyboard, this requires having to reach way over to hit the equals key with your pinky. You then follow it up by holding down LEFT SHIFT and now contorting your right hand to hit the greater than symbol with your ring finger. And that's only if you're a home row typist! The amount of movement required by those two keystrokes is an RSI disaster waiting to happen.

There are also a number of macros on this layer meant to simplify combination key presses that would otherwise need holding down one or more modifiers.

MACROS:
```
ABT: ALT + BACKTICK
     Switch between open windows aka COMMAND + \`(BACKTICK)

ALA: ALT + LEFT ARROW
     This acts like HOME does on a Windows/Linux machine.
     Under mac OS you need to press CMD + LEFT ARROW to go to the start of the current line.

ALA: ALT + RIGHT ARROW
     This acts like END does on a Windows/Linux machine.
     Under mac OS you need to press CMD + RIGHT ARROW to go to the end of the current line.


SALA: SHIFT + ALT + LEFTARROW
      Highlights the line from current cursor position to the *start* of the line. Acts similar to SHIFT+HOME on Windows/Linux.

SARA: SHIFT + ALT + RIGHTARROW
      Highlights the line from current cursor position to the *end* of the line. Acts similar to SHIFT+END on Windows/Linux.


CST:  CTRL + SHIFT + TAB
      Switch to the previous tab.

CT:   CTRL + TAB
      Switch to the next tab.


CMT:  COMMAND + \` (BACKTICK)
      Switch between currently open windows. \*mac OS only.
```

## Symbolic Layer (2)

I don't want to be using two key combos constantly, so I also added this symbol layer that is basically shift+numeric layer
```
| ~  | !  | @  | #  | $  | %  | ^  | &  | *  | (  | )  |  DEL |
|     |    |    |    |    |    |    |    | _  | +  | "  |     |
|      |    |    |    |    |    |    |    | {  |  } |PGUP| |  |
|    |    |    |    |          |        |      |HOME|PGDN|END |
```
## Fkeys (3)

I very rarely use Fkeys, but figured I'd throw them on anyway just in case. The setup basically mimics the way Fkeys are usually done on a 60%, with F11 and F12 still on - and =, even though the location of those keys has moved.
```
|    | F1 | F2 | F3 | F4 | F5 | F6 | F7 | F8 | F9 |F10 |      |
|     |    |    |    |    |    |    |    |F11 |F12 |    |     |
|      |    |    |    |    |    |    |    |    |    |    |    |
|    |    |    |    |          |        |      |    |    |    |
```
## Gaming Layer (4)

Originally this was just going to be a gaming layer (make esc just esc, make tab just tab, move space to the left side), but I ended up in a hotel without a usb mouse, so I added mousekeys to it as well.
```
|ESC |    |    |    |    |    |MWUP|MRCK|M_UP|MLCK|    |      |
| TAB |    |    |    |    |    |MWDN|M_LF|M_DN|M_RG|    |     |
|      |    |    |    |    |    |    |    |    |    |    |    |
|    |    |    |    |   SPACE  |        |      |    |    |    |
```
