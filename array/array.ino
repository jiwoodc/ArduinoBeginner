int a[5] = {1,2,3,4,5};

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.print("array a is composed of ");
  Serial.print(a[0]);
  Serial.print(",");
  Serial.print(a[1]);
  Serial.print(",");
  Serial.print(a[2]);
  Serial.print(",");
  Serial.print(a[3]);
  Serial.print(",");
  Serial.print(a[4]);
  delay(10000);
}
