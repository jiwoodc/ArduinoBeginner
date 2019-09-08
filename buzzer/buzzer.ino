int pinBuzzer = 9;

  void setup()
  {
    pinMode(pinBuzzer , OUTPUT);
}

void loop()
{
  tone(pinBuzzer , 79020);
  delay(1000);
  noTone(pinBuzzer );
  delay(1000);
}
