

// define pins numbers
const int trigPin=9;
const int echoPin = 10;
const int buzz=13;
const int led=12;

// defines variables
long duration;
int distance;

void setup() {
pinMode(buzz, OUTPUT);
pinMode(led, OUTPUT);
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(9600); // Starts the serial communication
}

void loop() {
//Clears the trigPin
digitalWrite(trigPin,LOW);
delayMicroseconds(2);

//Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);

//Reads the echoPin, returns the sound wave travel time
duration=pulseIn(echoPin, HIGH);

//Calculating the distance
distance=duration*0.034/2;

//Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
  
  //if any obstacle is present buzzer and led become active 
  if(distance<=100)
  {
   digitalWrite(buzz,HIGH);
   digitalWrite(led,HIGH);
    delay(1000);
    
  }
  else
    {
   digitalWrite(buzz,LOW);
   digitalWrite(led,LOW);
    delay(1000);
    
  }
    
    
}
