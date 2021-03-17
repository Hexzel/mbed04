#include "mbed.h"

PwmOut PWM1(D6);
AnalogIn Ain(A0);
// AnalogOut Aout(D7);

float ADCdata;
int main(){
  PWM1.period_ms(5);
  while(1){
    ADCdata = Ain; //send an opening text message
	PWM1 = ADCdata;
	// Aout = ADCdata;
    printf("%f\r\n", ADCdata);
    ThisThread::sleep_for(5ms);
  }
}
