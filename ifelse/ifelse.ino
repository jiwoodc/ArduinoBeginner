
void setup()
{
  Serial.begin(9600);
}

void loop()
{
   if( 103 % 2 == 0 ){
    Serial.println("a를 2로 나눈 나머지는 0입니다");
  }
    else if( 103 % 2 == 1 ){
      Serial.println("a를 2로 나눈 나머지는 1 입니다");
    }
    delay(100);
}
