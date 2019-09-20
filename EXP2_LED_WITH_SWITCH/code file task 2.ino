void setup() {
pinMode(10,INPUT);
pinMode(13,OUTPUT);
}
void loop() {
if(digitalRead(10)==HIGH)
{
  digitalWrite(13,HIGH);
  delay(300);
  digitalWrite(13,LOW);
  delay(300);
}
if(digitalRead(10) == LOW)
{
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
}
}    