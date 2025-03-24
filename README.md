# SCU_test_script
This repo contains the SCU test script to test the microcontroller on the SCU!

## Information

- This repo will exclusively contain code that will pull the pins of the microcontroller high or low.
- Pins are decided upon their use in the SCU2.0 firmware repo.

## Test Proceadure

Testing will work as follows.

- Getting the port and pin number for the GPIO's definition.
- Using the port and pin number and finding the corresponding electrical pad/via.
- Validate that the pin went from a low voltage to a high voltage.
- Repeate the last three steps until all pins have been tested.

