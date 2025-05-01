# Default Hillside Dactyl 50 Layout

The make and flash commands are

```
make hillside/d50/0_1:default
make hillside/d50/0_1:default:flash

```

For the first time with each side:

    qmk flash -kb hillside/d50/0_1 -km default -bl uf2-split-left
    qmk flash -kb hillside/d50/0_1 -km default -bl uf2-split-right


It also serves as a simple, clean layout 
  to verify that the configuration and switches work.
Use the [QMK Configurator Tester](https://config.qmk.fm/#/test) 
 to see that the switches produce output.
All the keys should register on the layout tester 
  except for the caps word and the two layer keys.
The LEDs should glow a nice red.
If they do not, you may need to clear the persistent EEPROM settings with the
  EE_CLR key on the adjust layer,
  or enable them with the RGB_TOG key.
