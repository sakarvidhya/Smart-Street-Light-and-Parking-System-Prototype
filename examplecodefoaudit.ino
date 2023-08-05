int trig =10;
int echo=9;

int LED1 =2;
int LED2 =3;
int LED3 =4;
int LED4 =5;
int LED5 =6;


int pirPin = 7;


int t=0;
int distance=0;

void setup()
{
 pinMode(trig,OUTPUT);
 pinMode(echo,INPUT);
 pinMode(pirPin, INPUT);
 pinMode(LED1, OUTPUT);
 pinMode(LED2, OUTPUT);
 pinMode(LED3, OUTPUT);
 pinMode(LED4, OUTPUT);
 pinMode(LED5, OUTPUT);

 
 Serial.begin(9600);

}

void loop()
{
  digitalWrite(trig , HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig ,LOW);
  t=pulseIn(echo,HIGH);
  distance =(t/2) /28.5 ;
  Serial.println(distance);
  int pirState = digitalRead(pirPin);
if(distance < 5 && pirState == HIGH)
 {
   digitalWrite(LED1,HIGH);
   digitalWrite(LED2,HIGH);
   digitalWrite(LED3,HIGH);
   digitalWrite(LED4,HIGH);
   digitalWrite(LED5,HIGH);


 }
 else if ( distance < 10 && pirState == HIGH)
 {
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,HIGH);
  digitalWrite(LED4,HIGH);
  digitalWrite(LED5,LOW);

  
 }
else if( distance <15 && pirState == HIGH)
{
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,HIGH);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,LOW);

}
else if( distance < 20 && pirState == HIGH)
{
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,LOW);

}

else 
 {
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED3,HIGH);
   digitalWrite(LED4,LOW);
   digitalWrite(LED5,LOW);
  

 }


}




