int pin=13;
void setup() {
  pinMode(pin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(pin,HIGH);
  delay(1000);
  digitalWrite(pinMode,LOW);
  delay(1000);
}
