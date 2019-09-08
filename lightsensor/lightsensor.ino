int pinCds = A0;
int pinLED = 6;

void setup()
{
  Serial.begin(9600);
  pinMode(pinCds, INPUT);
  pinMode(pinCds, OUTPUT);
}

void loop()
{
  int readValue = analogRead(pinCds);
  Serial.println(readValue);
  analogWrite(pinLED , readValue/4);
   delay(10);
}
