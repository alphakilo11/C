#include <stdio.h>
#include <time.h>

#define ACCELERATION 9.80665 /* m/s */

int main()
{
    double speed = 0;
    double distance_covered = 0;
    int i;
    for (i = 0; i < 60; i++){
        printf("Speed: %f, Distance: %f.\n", speed += ACCELERATION, distance_covered += speed);
        time.sleep(1);
    }
    return 0;
}