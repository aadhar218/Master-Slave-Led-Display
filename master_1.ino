#include <Wire.h>
//master code to detect the push button and turn on the led on the slave
int btpin=12;  //pin the push button is connected to
int dp=0;
void setup() {
  // put your setup code here, to run once:
pinMode(btpin,INPUT);
Wire.begin();
}
byte x=1;
void loop() {
 dp=digitalRead(btpin);
 if(dp==1){
   x=2;
 }
 else{
  x=1;
 }
Wire.beginTransmission(4);// data is send to the pin 4 of the slave arduino
Wire.write(x);
Wire.endTransmission();
delay(500);
}
