#include <PS2X_lib.h>
#include <avr/io.h>
#include <stdio.h>
#define IN_1  15          // L298N in1 motors Right           GPIO15(D8)
#define IN_2  13          // L298N in2 motors Right           GPIO13(D7)
#define IN_3  2           // L298N in3 motors Left            GPIO2(D4)
#define IN_4  0           // L298N in4 motors Left            GPIO0(D3)
#define EnA   14
#define EnB   12
#define data  16
#define cmd   5
#define clk  
#define attention  4
PS2X ps2x;
int error = 0;
int i=0,j=0; 
byte type = 0;

void setup() {
   Serial.begin(9600); 
 error = ps2x.config_gamepad(13,11,10,12, true, true);  
 type = ps2x.readType();   
 pinMode(IN_1, OUTPUT);
 pinMode(IN_2, OUTPUT);
 pinMode(IN_3, OUTPUT);
 pinMode(IN_4, OUTPUT); 
}


  void goAhead(){ 


      digitalWrite(IN_1, LOW);
      digitalWrite(IN_2, HIGH);

      digitalWrite(IN_3, LOW);
      digitalWrite(IN_4, HIGH);
   
  }
void goBack(){ 

      digitalWrite(IN_1, HIGH);
      digitalWrite(IN_2, LOW);

      digitalWrite(IN_3, HIGH);
      digitalWrite(IN_4, LOW);
      
  }
void goRight(){ 

      digitalWrite(IN_1, HIGH);
      digitalWrite(IN_2, LOW);
      

      digitalWrite(IN_3, LOW);
      digitalWrite(IN_4, HIGH);
      
  }
void goLeft(){

      digitalWrite(IN_1, LOW);
      digitalWrite(IN_2, HIGH);
      

      digitalWrite(IN_3, HIGH);
      digitalWrite(IN_4, LOW);
      
  }
void stopRobot(){  

      digitalWrite(IN_1, LOW);
      digitalWrite(IN_2, LOW);
     

      digitalWrite(IN_3, LOW);
      digitalWrite(IN_4, LOW);
      
 }

void loop() {
    
      if(ps2x.Button(PSB_PAD_UP))goAhead();
      else if(ps2x.Button(PSB_PAD_DOWN))  goBack();
      else if(ps2x.Button(PSB_PAD_LEFT)) goLeft();
      else if (ps2x.Button(PSB_PAD_RIGHT))goRight();
      else if (ps2x.ButtonPressed(PSB_BLUE)) stopRobot();
      delay(500);
}
