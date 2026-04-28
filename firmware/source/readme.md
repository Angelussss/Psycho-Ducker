# psycho_ducker

![psycho_ducker]

*A 75% exploded keyboard*

* Keyboard Maintainer: [Angelo Perotti](https://github.com/Angelussss)
* Hardware Supported: psycho_ducker
* Hardware Availability: this project is opensource, you can build your own!

Make example for this keyboard (after setting up your build environment):

    make psycho_ducker:default

Flashing example for this keyboard:

    make psycho_ducker:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 2 ways:

* **Physical reset button**: Briefly press the button on the top right of the PCB on boot 
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
