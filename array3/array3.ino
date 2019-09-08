int a[5] = {1,2,3,4,5};

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.print("array a is composed of");
  for( int i=0; i<=4; i++ ){
    Serial.print(a[i]);
    Serial.print(",");
  }
  delay(10000);
}
