const int ldrPin = 2;      // LDR sensor output pin
const int buzzerPin = 3;   // Buzzer module output pin

void setup() {
  pinMode(ldrPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  digitalWrite(buzzerPin,HIGH);
  Serial.begin(9600);
}

void loop() {
  int ldrValue = digitalRead(ldrPin); // Read LDR sensor value (HIGH or LOW)

  if (ldrValue == HIGH) {
    digitalWrite(buzzerPin, HIGH); // Turn on the buzzer
    Serial.println("LDR sensor covered! Security breach detected.");
  } else {
    digitalWrite(buzzerPin, LOW); // Turn off the buzzer
    Serial.println("LDR sensor secure.");
  }

  delay(100); // Add a short delay to avoid rapid triggering
}
