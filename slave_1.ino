#include <Wire.h>
// slave code to get the value from the master about the push button and turn on the led according to it
int ledpin=13;
void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
Wire.begin(4);
Wire.onReceive(receiveEvent);
Serial.begin(9600);
}

void receiveEvent(int howmany) {
  // put your main code here, to run repeatedly:
while(Wire.available()>0){
  int x=Wire.read();
  Serial.println(x);
  if(x==2){
    digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(13,LOW);
  }
}
}
void loop()
{
delay(500);
}
