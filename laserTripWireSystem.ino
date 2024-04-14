const int ldrPin = A0;   // Connect the LDR to this pin
const int ledPin = 7;    // Connect the LED to this pin
const int buzzerPin = 8; // Connect the buzzer to this pin

void setup() {
  pinMode(ldrPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(ldrPin);
  Serial.println(ldrValue);
  // You may need to adjust the threshold value based on your environment
  if (ldrValue < 300) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
    //Serial.println("Laser Blocked! Alarm ON");
  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
   // Serial.println("Laser NOT Blocked. Alarm OFF");
  }

  delay(100);  // Adjust the delay based on your project requirements
  // digitalWrite(ledPin,HIGH);
}
