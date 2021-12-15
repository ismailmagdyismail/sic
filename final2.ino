#include <Servo.h>
    int led=13;
    Servo myservo;
    int pos=0 ;
    int trigPin =12;
    int echoPin = 11;
    int buttonpin=4;
    int buttonstate=0;
    int sensorValue = 0;
    long duration, distance;
 
  
 
void setup() {
  
  myservo.attach(10);  // attaches the servo on pin 9 to the servo object
  pinMode(led,OUTPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(buttonpin,INPUT);
  Serial.begin(9600); 
  
}

void loop() 
{
  buttonstate=digitalRead(buttonpin) ;
  if(pos == 0)
{
    for (pos = 0; pos < 90; pos += 1) 
    { 
          if(buttonstate==HIGH)
            {
              digitalWrite(trigPin, LOW);  
              delayMicroseconds(2); 
              digitalWrite(trigPin, HIGH);
              delayMicroseconds(10); 
              digitalWrite(trigPin, LOW);
              duration = pulseIn(echoPin, HIGH);
              distance = (duration/2) / 29.1;
               
              if (distance < 25) 
              {  
                digitalWrite(led,HIGH);
                Serial.println("some one is in the room");
              }
              else
              {
                 digitalWrite(led,LOW);
                 Serial.println("no one is in the room");
              }
        myservo.write(pos); 
        delay(15);
        }
  }
}



 
  if(pos == 90)
{
    for (pos = 90; pos < 0; pos -= 1) 
    { 
          if(buttonstate==HIGH)
            {
              digitalWrite(trigPin, LOW);  
              delayMicroseconds(2); 
              digitalWrite(trigPin, HIGH);
              delayMicroseconds(10); 
              digitalWrite(trigPin, LOW);
              duration = pulseIn(echoPin, HIGH);
              distance = (duration/2) / 29.1;
               
              if (distance < 25) 
              {  
                digitalWrite(led,HIGH);
                Serial.println("some one is in the room");
              }
              else
              {
                 digitalWrite(led,LOW);
                 Serial.println("no one is in the room");
              }
        myservo.write(pos); 
        delay(15);
        }
  }
}







  
}
