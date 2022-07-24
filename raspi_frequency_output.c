/* 
With this code Frequency up to about 7 kHz are possible.
based on: http://wiringpi.com/examples/blink/ 

Compile with:
gcc -Wall frequency_output.c -lwiringPi
*/
#include <wiringPi.h>
#include <stdio.h>
#include <time.h>

#define RUNNING_TIME 150 // s
#define FREQUENCY 60 // Hz
#define DUTY_CYCLE 50 // %

int main (void)
{
  printf("Parameters: %i Hz, %i s, %i %%\n", FREQUENCY, RUNNING_TIME, DUTY_CYCLE);
  wiringPiSetup () ;
  pinMode (0, OUTPUT) ;
  int delay_ms = 1000 / FREQUENCY; // ms
  long start = time(0);
  for (int i = 0; i < (RUNNING_TIME * FREQUENCY); i++)
  {
    digitalWrite (0, HIGH) ; delay (delay_ms * (100 - DUTY_CYCLE) / 100) ;
    //printf("%li: Off\n", time(0));
    digitalWrite (0,  LOW) ; delay (delay_ms * DUTY_CYCLE / 100);
    //printf("On\n");
  }
  int actual_time = time(0) - start;
  double actual_frequency = (double) (RUNNING_TIME * FREQUENCY) / actual_time;
  printf("Result %.4f Hz, %i s.\n", actual_frequency, actual_time);
  return 0 ;
}
