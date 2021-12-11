int led1 =9;
int led2=10;
int ldr1=A0;
int ldr2=A1;
int ldr2value=0;
int ldr1value=0;
int buzzer=12;
int people=0;
int empty=0;

void setup() 
{
  pinMode(led1,OUTPUT);
  pinMode(ldr1,INPUT);
  pinMode(ldr2,INPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);

}

void loop() 
{
ldr2value=analogRead(ldr2);
ldr1value=analogRead(ldr1);
Serial.print(people);

 if(people<5)
   {
noTone(buzzer) ;   
}
if (ldr2value<=300)
  {
    digitalWrite(led2,HIGH);
    delay(1500);
    digitalWrite(led2,LOW);
    if(people<5)
    {
      people=people+1;
    }
    else if(people=5)
    {
      if (ldr2value<=300)
      {
        tone(buzzer,1000);
        delay(1000);
        noTone(buzzer); 
      }    
   }
  }
 else
    {
    digitalWrite(led2,LOW);
    }
    if (ldr1value<=300)
    {
    digitalWrite(led1,HIGH);
    delay(1500);
    digitalWrite(led1,LOW);
    if(people>0)
    {
      people=people-1;
    }
    else if(people<=0)
    {
      Serial.print(empty);
    }
  }
  else
    {
    digitalWrite(led1,LOW);
    }
  
}
