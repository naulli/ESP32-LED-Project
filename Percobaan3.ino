void setup() {
  // put your setup code here, to run once:
  pinMode(14, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode(32, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(14, HIGH);
  delay(100);
  digitalWrite(14, LOW);
  digitalWrite(25, HIGH);
  delay(100);
  digitalWrite(25, LOW);
  digitalWrite(32, HIGH);
  delay(100);
  digitalWrite(32, LOW);
}
