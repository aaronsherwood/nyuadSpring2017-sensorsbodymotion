void setup() {
  // start the serial communication
  Serial.begin(9600);
}

void loop() {
  // easy, just touchRead(pin)
  int data = touchRead(15);
  Serial.println(data);
}
