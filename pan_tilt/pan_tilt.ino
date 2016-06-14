#include <Servo.h> 

Servo panservo;
Servo tiltservo;

const int maxpan = 180;
const int minpan = 10;
const int maxtilt = 200;
const int mintilt = 120;
char input;

int pan = 100;
int tilt = 200;
int step = 10;
void setup() { 

  panservo.attach(8);  
  tiltservo.attach(9);
  panservo.write(pan);
  tiltservo.write(tilt);

  Serial.begin(9600);  //this is the deafult rate for node serialport
  Serial.println("ready");

} 

void loop() { 

  if(Serial.available() > 0){
    input = (char)Serial.read();

    if(input == 'a'){
      if((pan + step) < maxpan) pan += step;
    }

    if(input == 'd'){
      if((pan - step) > minpan) pan -= step;
    }

    if(input == 's'){
      if((tilt + step ) < maxtilt) tilt += step;
    }

    if(input == 'w'){
      if((tilt - step ) > mintilt) tilt -= step;
    }

    panservo.write(pan);
    tiltservo.write(tilt);
    Serial.println("pan: " + (String)pan + " tilt: " + (String)tilt);
  }
}

//this code was adapted from an example by brad zdanivsky found on http://verticalchallenge.org/archives/2823 
