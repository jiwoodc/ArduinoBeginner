int pinPotentiometer = A0;

void setup()
{
  Serial.begin(9600);
  pinMode(pinPotentiometer, INPUT);

}

void loop()
{
  int readValue = analogRead(pinPotentiometer);
  Serial.println(readValue);
  delay(10);

}
