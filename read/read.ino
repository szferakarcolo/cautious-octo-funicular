//read

int led = 9;
int brightness = 64;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);

  for (int x = 0; x <= 255; x++) {
    analogWrite(led, x);
    delay(1);
  }
  for (int x = 254; x >= 10; x--) {
    analogWrite(led, x);
    delay(1);
  }
}

void loop() {
  analogWrite(led, 10);
  
  int sensorValue = digitalRead(A0);

  if (sensorValue == HIGH) {
     analogWrite(led, brightness);
  }

  delay(10);
}
