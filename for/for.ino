void setup(){
  Serial.begin(9600);
}

void loop(){
  int sum = 0;
  for (int i=0; i<=10; i++){
    sum = sum+i;
  }
  Serial.print("summation is : ");
  Serial.println(sum);
}
