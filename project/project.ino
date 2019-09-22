// LED blinking
int LED1 =13;
int LED2 =14;
int LED3 =15;
int LED4 =16;
void setup(){
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(LED3,OUTPUT);
pinMode(LED4,OUTPUT);
}
void loop(){
digitalWrite(LED1,HIGH);              // LED is on
delay(1000);
digitalWrite(LED2,HIGH);              // LED is on
delay(1000);
digitalWrite(LED3,HIGH);              // LED is on
delay(1000);
digitalWrite(LED4,HIGH);               // LED is on
delay(1000);
digitalWrite(LED1,LOW);              //LED is off
delay(1000);
digitalWrite(LED2,LOW);              //LED is off
delay(1000);
digitalWrite(LED3,LOW);              //LED is off
delay(1000);
digitalWrite(LED4,LOW);             //LED is off
delay(1000); 
}
