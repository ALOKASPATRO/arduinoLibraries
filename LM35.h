#ifndef LM35_h
#define LM35_h



#if ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

class LM35
{
  public:
    Temperature(int analog_Pin);

  private:
  	int analog_Pin;
  	int value;
  	float mv;
  	float cel;
};

#endif