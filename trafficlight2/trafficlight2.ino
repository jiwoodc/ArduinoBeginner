int pinRed = 11;
int pinGreen = 10;
int pinBlue = 9;
void setup(){
  pinMode(pinRed, OUTPUT);
  pinMode(pinGreen, OUTPUT);
  pinMode(pinBlue, OUTPUT);
 

}

void loop(){
  digitalWrite(pinRed, 1);
  digitalWrite(pinGreen, 0);
  digitalWrite(pinBlue, 0);
  delay(1000);

  digitalWrite(pinRed, 0);
  digitalWrite(pinGreen, 1);
  digitalWrite(pinBlue, 0);
  delay(1000);

  digitalWrite(pinRed, 0);
  digitalWrite(pinGreen, 0);
  digitalWrite(pinBlue, 1);
  delay(1000);

  digitalWrite(pinRed, 0);
  digitalWrite(pinGreen, 1);
  digitalWrite(pinBlue, 1);
  delay(1000);

  digitalWrite(pinRed, 1);
  digitalWrite(pinGreen, 0);
  digitalWrite(pinBlue, 1);
  delay(1000);

  digitalWrite(pinRed, 1);
  digitalWrite(pinGreen, 1);
  digitalWrite(pinBlue, 0);
  delay(1000);
  
  digitalWrite(pinRed, 1);
  digitalWrite(pinGreen, 1);
  digitalWrite(pinBlue, 1);
  delay(1000);
  
}
