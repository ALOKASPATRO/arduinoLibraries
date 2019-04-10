#if ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

#include "LM35.h"

LM35::Temperature(int analog_Pin){
	pinMode(analog_Pin,INPUT);
	value = analogRead(analog_Pin);
	// val = analogRead(tempPin);
	mv = ( value/1024.0)*5000; 
	cel = mv/10;
	return cel;
}
