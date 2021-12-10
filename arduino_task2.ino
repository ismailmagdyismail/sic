void setup() {
pinMode(13,OUTPUT);
pinMode(11,OUTPUT);
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
pinMode(5,OUTPUT);
pinMode(2,OUTPUT);
}

void loop() 
{
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(11,HIGH);
  delay(1000);
  digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(2,HIGH);
  delay(2000);
  digitalWrite(13,LOW);
  digitalWrite(11,LOW);
  digitalWrite(7,LOW);
  digitalWrite(5,LOW);
  digitalWrite(2,LOW);
  digitalWrite(8,LOW);
  delay(2000);

}
