int button =1;
int led =0;
int IN1=8;
int IN2=9;
int EN=10;
int pot=A0;
int potvalue=0;
int buttonvalue=0;
int motorspeed=0;
void setup()
{
  pinMode(button,INPUT);
  pinMode(led, OUTPUT);
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(pot,INPUT);
  pinMode(EN,OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  potvalue=analogRead(pot);
  delay(1000);
  


  buttonvalue= digitalRead(button);
  if(buttonvalue==1)
  {
    digitalWrite(led,HIGH);
    motorspeed=map(potvalue,0,1024,0,255);
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    digitalWrite(EN,motorspeed);
    
    Serial.println("RPM");
    Serial.println(motorspeed);
    
   }
   else{
    Serial.println("push the button to start");
    digitalWrite(led,LOW);
    }
 
}
