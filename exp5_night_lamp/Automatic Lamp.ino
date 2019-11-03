

//defining pins
const int lamp = 13;
const int ldrpin = A0;

//defining state of pins 
void setup() {
Serial.begin(9600);
pinMode(lamp, OUTPUT);
pinMode(ldrpin,INPUT);
}

// defining functionality of pins
void loop() {
int c = analogRead(ldrpin);// sensor value

if ( c < 800)
{
digitalWrite(lamp,HIGH); //lamp on
Serial.println(c);       // printing sensor value
}
else {
digitalWrite(lamp,LOW);//lamp off
Serial.println(c);       // printing sensor value
}
}