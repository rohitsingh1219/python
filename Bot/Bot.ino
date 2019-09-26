int IR1=12;
int IR2=14;
void setup() {
  Serial.begin(9600);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(0,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(IR1,INPUT);
  pinMode(IR2,INPUT);
  
  // put your setup code here, to run once:

}

void loop() {
  if (digitalRead(IR1)==HIGH && digitalRead(IR2)==HIGH){
    Serial.println("MOVING FORWARD");
    digitalWrite(0,HIGH);
    digitalWrite(2,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(4,LOW);}
    else if(digitalRead(IR1)==LOW && digitalRead(IR2)==HIGH){
    Serial.println("MOVING RIGHT");
    digitalWrite(0,LOW);
    digitalWrite(2,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(4,LOW);}
     else if(digitalRead(IR1)==HIGH && digitalRead(IR2)==LOW){
    Serial.println("MOVING LEFT");
    digitalWrite(0,HIGH);
    digitalWrite(2,LOW);
    digitalWrite(5,LOW);
    digitalWrite(4,LOW);}
     else if(digitalRead(IR1)==LOW && digitalRead(IR2)==LOW){
    Serial.println("STOP");
    digitalWrite(0,LOW);
    digitalWrite(2,LOW);
    digitalWrite(5,LOW);
    digitalWrite(4,LOW);}
      
  }
  // put your main code here, to run repeatedly:
