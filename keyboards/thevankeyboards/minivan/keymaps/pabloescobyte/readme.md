# Pabloescobyte's Catalyst minivan layout

This layout is for a Catalyst MiniVan with the arrow layout and the standard 3-modifier, split-space configuration.

There are 4 layers in addition to the default base layer.

The CAPS key is FN1, left spacebar is FN2, right spacebar is FN3; the modifier between the right spacebar and the left arrow key is FN4 but is a toggle rather than a momentary layer switch.

Additionally CAPS acts as the ESC key when tapped otherwise it's a momentary layer toggle when held down. I do this because of muscle memory and I don't need to hit ESC all that often. 


My work is primarily based in mac OS and Linux so the functions are tailored as such. If you work in Windows you can easily adjust for it by changing the aliases at the top of the file.  

By default the minivan modifiers on the bottom left are CTRL+GUI+ALT and I just swap them around via the 'Modifier Keys' dialog in System Preferences 'Keyboard' preference pane to CTRL/OPTION/COMMAND. This is to preserve their normal positions in Linux and Windows or any other machine the keyboard is plugged into besides my own.


## Default/Base Layer (0)

The base layer is the default QWERTY layout with TAB to the left instead of ESC. The CAPS key acts as ESC when tapped otherwise it's a momentary layer toggle to FN layer 1.

/? is off to the right of the UP arrow key and does take time to get used to. I do use the forward slash a lot when in the command line so I've already gotten used to its new location.


```
|GESC| Q  | W  | E  | R  | T  | Y  | U  | I  | O  | P  | BSPC |
| TAB | A  | S  | D  | F  | G  | H  | J  | K  | L  | ;  |ENTER|
|SHIFT | Z  | X  | C  | V  | B  | N  | M  | ,  | .  | UP | /  |
|CTRL|WIN |ALT |FN 3|   FN 1   |  SPACE | FN 4 |LEFT|DOWN|RIGH|
```
## Numeric Layer (1)

This layer has the numrow as well as swapping the arrow keys for a nav cluster, and swapping ;: for '" and /? for \|. With that almost all of the missing keys are accounted for.
```
| `  | 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | 9  | 0  |  DEL |
|     |    |    |    |    |    |    |    | -  | =  | '  |     |
|      |    |    |    |    |    |    |    | [  |  ] |PGUP| \  |
|    |    |    |    |          |        |      |HOME|PGDN|END |
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
