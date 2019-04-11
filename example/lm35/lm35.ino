#include<LM35.h>
LM35 lm35;
void setup() {
Serial.begin(9600);
}

void loop() {
float reading = lm35.Temperature(A1);
Serial.println(reading);
delay(1000);
}
