 # flashing by timer using Arduino

Build Status ↗ ↗.
# this is a library.
follow all these steps:

# Hardware Requirements for test

The following hardware is required to build this project:

Arduino UNO or similar board.

you need 1 LED ,1 PUSHBUTTON and 2 Resister. 

# How to link for test?

Link Resister to cathode LED thin link to GND in Arduino or Breadboard, anode link to digital pin in Arduino.

link Resister to PUSHBUTTON thin link to GND in Arduino or Breadboard and link cable to Arduino form Breadboard or down Resister, anode link to 5v or anode in Breadboard  .


# Installation

To install the software, follow these steps:

Clone this repository: git clone https://github.com/ahmed-eldesoky284/waitpd.git Connect the hardware components as shown in the diagram in the docs directory. Upload the flashingbytimer.ino sketch to the Arduino board using the Arduino IDE. .

# Usage

To use the library, follow these steps:

Turn on the robot and the remote control device. Open the Bluetooth terminal app and connect to the HC-05 module. Send commands to the robot using the app. The commands are: F: Move forward B: Move backward L: Turn left R: Turn right S: Stop

# License

This project is licensed under the MIT License. See the LICENSE file for details.
