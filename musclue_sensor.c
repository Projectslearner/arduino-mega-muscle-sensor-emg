/*
    Project name : Muscle Sensor EMG
    Modified Date: 14-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-muscle-sensor-emg
*/

const int emgPin = A0; // Analog pin connected to the EMG sensor
int emgValue = 0; // Variable to store EMG sensor value

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(emgPin, INPUT); // Set EMG sensor pin as INPUT
}

void loop() {
  // Read EMG sensor value
  emgValue = analogRead(emgPin);
  
  // Print EMG sensor value to Serial Monitor
  Serial.print("EMG Sensor Value: ");
  Serial.println(emgValue);
  
  delay(100); // Add a small delay to avoid spamming the Serial Monitor
}
