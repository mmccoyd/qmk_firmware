# Hillside Dactyl 50 - Hardware Test Keymap

The make and flash commands are

```
make hillside/d50:hardware_test
make hillside/d50:hardware_test:flash
```

This is a simple keymap to verify that the hardware and switches work
    and are wired as expected. It has keys on the base layer to

- Test that any underglow LEDs are working properly
- Clear the flash setting if needed
- Check that switches were wired to the expected pins.

It can be used with a jumper wire held between a row and column
    contact on the PCB or between the contacts on a switch amoeba,
    or by depressing an installed switch.
Use the [QMK Configurator Tester](https://config.qmk.fm/#/test)
    to see that the switches produce output in the expected order.

The LEDs should glow a nice red.
If they don't,
    you may need to clear the persistent EEPROM settings with the EE_CLR key,
    or enable them with the UG_TOGG key,
    both of which are part of this keymap.

Further tests can be done with the default keymap to check the switches
that were reserved here for clearing the flash memory.

When plugging in a new keyboard,
OS X tries to identify it with key presses of the keys next to the left and right shifts.
But you can just cancel out of that.
