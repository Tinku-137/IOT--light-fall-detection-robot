#include <Servo.h>

// Define pins
const int ldrPin = A0; // LDR connected to A0
const int ledPin = 9;  // LED connected to pin 9
const int servoPin = 11; // Servo connected to pin 11 (optional)

// Variables
int ldrValue = 0;
int threshold = 500; // Adjust this value based on your LDR's sensitivity
Servo myServo;

void setup() {
  // Initialize pins
  pinMode(ldrPin, INPUT);
  pinMode(ledPin, OUTPUT);

  // Attach servo (optional)
  myServo.attach(servoPin);

  // Start serial communication
  Serial.begin(9600);
}

void loop() {
  // Read LDR value
  ldrValue = analogRead(ldrPin);
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  // Control LED based on light intensity
  if (ldrValue < threshold) {
    digitalWrite(ledPin, HIGH); // Turn on LED in low light
  } else {
    digitalWrite(ledPin, LOW); // Turn off LED in bright light
  }

  // Optional: Servo control for solar tracking
  trackLight(); // Call the tracking function
  delay(100); // Small delay for stability
}

void trackLight() {
  // Read LDR values from two sensors (for solar tracking)
  int ldrLeft = analogRead(A1); // Left LDR
  int ldrRight = analogRead(A2); // Right LDR

  // Determine direction based on light intensity
  if (ldrLeft > ldrRight) {
    myServo.write(0); // Move servo to the left
  } else if (ldrRight > ldrLeft) {
    myServo.write(180); // Move servo to the right
  } else {
    myServo.write(90); // Center position
  }
}
