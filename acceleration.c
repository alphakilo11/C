#include <stdio.h>
#include <time.h>

#define ACCELERATION 9.80665 /* m/s/s */
#define SPEED_SOUND 343 /* m/s */
#define SPEED_LIGHT 300000000 /* m/s */
#define AU 
#define RUN_TIME 3600

int main()
{
    double speed = 0;
    double distance_covered = 0;
    double speed_kmh, speed_mach, speed_light;
    int i;
    for (i = 1; i <= RUN_TIME; i++) {

        speed += ACCELERATION;
        speed_kmh = speed * 3.6;
        speed_mach = speed / SPEED_SOUND;
        speed_light = speed / SPEED_LIGHT;
        distance_covered += speed;
        distance_au = distance_covered /
            printf("%i Seconds, Distance: %f, Speed: %f m/s %f km/h %f MACH %f of light\n", i, distance_covered, speed, speed_kmh, speed_mach, speed_light);
        //sleep(1);
    }
    return 0;
}