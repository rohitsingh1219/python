#include<Servo.h>
Servo servo;
int pot=0;
int temp;
void setup()
{
  Serial.begin(9600);
  servo.attach(2);
  servo.write(0);
}
void loop()
{
  temp=analogRead(pot);
  Serial.println(temp);
  temp=map(temp,0,1023,0,180);
  servo.write(temp);
  delay(50);
}
