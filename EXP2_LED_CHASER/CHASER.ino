void setup() {
  for (int i = 2; i <= 9; i++) 
  {
    pinMode(i, OUTPUT);
  }
}
void loop() {
  for (int i = 2; i < 10; i++) 
  {
    digitalWrite(i, HIGH);
    delay(200);
    allLEDsOFF();

    
  }
  for (int i = 8; i >= 3; i--) {
    digitalWrite(i, HIGH);
    delay(200);
    allLEDsOFF();
      }
}
void allLEDsOFF(void)
{
  for (int i = 2; i < 10; i++) {
    digitalWrite(i, LOW);
  }
 
}