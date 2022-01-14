/* what happens over time when an object constantly accelerates with 1G? */

#include <stdio.h>
#include <time.h>

#define ACCELERATION 9.80665 /* m/s/s */
#define SPEED_SOUND 343 /* m/s */
#define SPEED_LIGHT 300000000 /* m/s */
#define AU 149597870700
#define RUN_TIME 3600 * 24 * 354

int main()
{

    double speed = 0;
    double distance_covered = 0;
    double speed_kmh, speed_mach, speed_light, distance_au, distance_ls, distance_lh, distance_lj;
    int i;
    for (i = 1; i < RUN_TIME; i++) {

        speed += ACCELERATION;
        speed_kmh = speed * 3.6;
        speed_mach = speed / SPEED_SOUND;
        speed_light = speed / SPEED_LIGHT;
        distance_covered += speed;
        distance_au = distance_covered / AU;
        distance_ls = distance_covered / SPEED_LIGHT;
        distance_lh = distance_ls / 3600;
        distance_lj = distance_lh / (24 * 365.25);
            //printf("%i Seconds, Distance: %f m %f AU %f ls %f lh Speed: %f m/s %f km/h %f MACH %f of light\n", i, distance_covered, distance_au, distance_ls, distance_lh, speed, speed_kmh, speed_mach, speed_light);
        //sleep(1);
    }
    double ticks = clock();
    double clocks_per_sec = CLOCKS_PER_SEC;
    double execution_time = ticks / clocks_per_sec;
    printf("%.3f execution time in s\n", execution_time);
    printf("%i Seconds, Distance: %f m %f AU %f ls %f lh %f lj Speed: %f m/s %f km/h %f MACH %f of light\n", i, distance_covered, distance_au, distance_ls, distance_lh, distance_lj, speed, speed_kmh, speed_mach, speed_light);
    return 0;
}