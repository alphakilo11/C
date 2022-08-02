/* 
Attempt to create a program that is able to generate a frequency
Frequencies up to 950 kHz were demonstrated.
demonstrated 100 % accuracy (= not a single "beat" missed) up to 2000 Hz
10000 -       7 missed
100000 -    721 missed
1000000 - 61999 missed
the error rate seems to be rising by the power of 2 of the frequency increase
*/

#include <stdio.h>
#include <time.h>
#include <unistd.h>

#define RUNNING_TIME 1 // s  maximum: 4294 s (UINT_MAX)
#define FREQUENCY 100000 // Hz  max.: 1000000 (CLOCKS_PER_SEC)
#define MONITOR_REFRESH 1 // Hz

int main (void)
{
  printf("Parameters: %i Hz, %i s ", FREQUENCY, RUNNING_TIME);
  printf("Clocks per Second: %li\n", CLOCKS_PER_SEC);
  unsigned delay = CLOCKS_PER_SEC / FREQUENCY;
  unsigned display_refresh_delay = CLOCKS_PER_SEC / MONITOR_REFRESH;
  unsigned start_time = clock();
  unsigned end_time = start_time + RUNNING_TIME * CLOCKS_PER_SEC + delay;
  unsigned count = 0;
  unsigned display_last_count = 0;
  unsigned jetzt = clock();
  unsigned next_ping = jetzt + delay;
  unsigned next_display_refresh = jetzt + display_refresh_delay;
  do
  {
    jetzt = clock();
    if (jetzt >=  next_ping) {
        count++;
        next_ping = jetzt + delay;
        if (jetzt >= next_display_refresh) {
            //printf("Current Frequency: %i\n", (count - display_last_count) / MONITOR_REFRESH);
            display_last_count = count;
            next_display_refresh = jetzt + display_refresh_delay;
        }
    }
  } while (jetzt <= end_time);

  int actual_time = (clock() - start_time) / CLOCKS_PER_SEC;
  double actual_frequency = count / actual_time;
  printf("Calculated: %i Hz ", (end_time - start_time) / delay - 1);
  printf("actual %.4f Hz, %i s, 'beats': %i\n", actual_frequency, actual_time, count);
  return 0 ;
}
