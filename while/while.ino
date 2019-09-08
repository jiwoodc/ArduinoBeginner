void setup()
{
  Serial.begin(9600);
}
  void loop()
  {
    for( int i=1; i<=9; i++ ){
      Serial.print("3x");
      Serial.print(i);
      Serial.print("=");
      Serial.println(3*i);
    }
    delay(10000);
}
