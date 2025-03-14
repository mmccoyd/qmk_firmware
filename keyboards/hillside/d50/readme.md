# Hillside Dactyl 50

![hillside](https://imgur.com/VFA9E4Yh.png)

[Hillside Dactyl 50](https://github.com/mmccoyd/hillside)
    is a Dactyl choc-spaced split ergonomic keyboard with
    three main rows of six, a lower row of two, and five thumb keys keys
    per side.

* Keyboard Maintainer: [Michael McCoyd](https://github.com/mmccoyd)
* Hardware Supported: ProMicro RP2040 and compatible
* Hardware Availability: https://github.com/mmccoyd/hillside

Make example for this keyboard (after setting up your build environment):

    make hillside/d50/0_1:default

Flashing example for this keyboard:

    make hillside/d50/0_1:default:flash

For the first time with each side:

    qmk flash -kb hillside/d50/0_1 -km default -bl uf2-split-left
    qmk flash -kb hillside/d50/0_1 -km default -bl uf2-split-right

After that:

    qmk flash -kb hillside/d50/0_1 -km default

## Bootloader

Enter the bootloader by either:

* **Physical reset button**: Briefly press the button on the back of the PCB.
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
