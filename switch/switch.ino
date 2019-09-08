alpint pinSwitch = 5;

void setup()
{
  pinMode(pinSwitch , INPUT);
  Serial.begin(9600);
}

void loop()
{
  int valueFromSwitch = digitalRead(pinSwitch); 
  Serial.print("value from switch is : ");
  Serial.println(valueFromSwitch);
  delay(100);
}
