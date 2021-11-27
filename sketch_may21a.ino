const int pResistor = A0;
const int led1 = 8;
const int led2 = 9;
const int led3 = 10;
const int led4 = 11;
const int led5 = 12;
const int led6 = 13;

float value;

void setup(){

 pinMode(pResistor, INPUT);
 
 pinMode(led1 , OUTPUT);
 pinMode(led2 , OUTPUT);
 pinMode(led3 , OUTPUT);
 pinMode(led4 , OUTPUT);
 pinMode(led5 , OUTPUT);
 pinMode(led6 , OUTPUT);
 Serial.begin(9600);

 int i = 3;
 while(i>0)
 {
   digitalWrite(led1,HIGH);
   digitalWrite(led2,HIGH);
   digitalWrite(led3,HIGH);
   digitalWrite(led4,HIGH);
   digitalWrite(led5,HIGH);
   digitalWrite(led6,HIGH);
   delay(200);
   digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
   digitalWrite(led4,LOW);
   digitalWrite(led5,LOW);
   digitalWrite(led6,LOW);
   delay(200);
   i--;
 }
 
}

void loop(){
  value = analogRead(pResistor);

  Serial.println(String(value)+" _ ");

  if(value>10 && value<100)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
  }
  else if(value>100 && value<340)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
  }
  else if(value>340 && value<510)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
  }
  else if(value>510 && value<680)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
  }
  else if(value>680 && value<850)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,LOW);
  }
  else if(value>850 && value<1024)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
  }
  else
  {
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
  }

}
