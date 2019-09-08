int pinLEDRed = 6;
int pinLEDYellow = 5;
int pinLEDGreen = 4;

void setup(){
  pinMode(pinLEDRed , OUTPUT);
  pinMode(pinLEDYellow , OUTPUT);
  pinMode(pinLEDGreen , OUTPUT);

}

void loop() {
  digitalWrite(pinLEDRed, true);
  delay(1000);
  digitalWrite(pinLEDRed, false);
  delay(1000);
  digitalWrite(pinLEDYellow, true);
  delay(1000);
  digitalWrite(pinLEDYellow, false);
  delay(1000);
  digitalWrite(pinLEDGreen, true);
  delay(1000);
  digitalWrite(pinLEDGreen, false);
  delay(1000);

}
