

//defining contants
const int switchPin = 2; 
const int bellPin = 7; 

// defining state
int bellState = LOW; 
int switchState=LOW; 
int lastswitchState = LOW;

// initialising 
unsigned long lastDebounceTime = 0; 
unsigned long debounceDelay = 10; 

//Declaring input and output mode of digital pins
void setup() 
{
pinMode(switchPin, INPUT);
pinMode(bellPin, OUTPUT);
digitalWrite(bellPin, bellState); 
}

//setup code for bell
void loop() 
{
int reading = digitalRead(switchPin);

if (reading != lastswitchState) 
{
lastDebounceTime = millis();
}
if ((millis() - lastDebounceTime) > debounceDelay) 
{
if (reading != switchState) 
{ 
switchState = reading;
if (switchState == HIGH) 
{
bellState = !bellState;
}
}
}

digitalWrite(bellPin, bellState);

lastswitchState:
lastswitchState = reading;
}