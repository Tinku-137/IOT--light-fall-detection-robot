# Light-Sensitive System with LDR

## Description
This project uses an LDR (Light Dependent Resistor) to detect ambient light levels and control an LED. Optionally, it includes a servo motor for solar tracking.

## Components Used
- Arduino Uno
- LDR (Light Dependent Resistor)
- 10kΩ Resistor
- LED
- Servo Motor (optional)
- Breadboard and Jumper Wires

## Setup Instructions
1. Connect the LDR to A0 and GND (via a 10kΩ resistor).
2. Connect the LED to pin 9 and GND.
3. (Optional) Connect the servo motor to pin 11, 5V, and GND.
4. Upload the code to the Arduino.

## Code Explanation
- The LDR measures light intensity.
- The LED turns on when the light level is below a threshold.
- (Optional) The servo motor adjusts its position based on light intensity.

## Challenges
- Calibrating the LDR threshold for accurate detection.
- Ensuring smooth servo motor movement.

## Future Improvements
- Add an LCD display for real-time light intensity readings.
- Use multiple LDRs for better solar tracking.

## License
This project is open-source under the MIT License.
