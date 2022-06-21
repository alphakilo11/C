/* calculate wind influence on aircraft movement
ADD Convert to vectors in XY coordinate system
ADD Crosswind and Head/Tailwind Component
ADD Ground Speed
ADD Ground Track
ADD Mach Number */

#include <stdio.h>
#include <math.h>

#define PI 3.14159265

double conv_radians(double degrees) {
    return (degrees / 180 * PI);
}

int main()
{
    struct _windinformation {
        int direction;
        int speed;
        int gust;
    };
    
    struct _windinformation loxz;
    loxz.direction = 180;
    loxz.speed = 12;
    loxz.gust = 25;

    int loxz_runway_hdg = 257;
    int alpha = loxz.direction - loxz_runway_hdg;
    double crosswind = (double) loxz.speed / 90 * alpha;

    printf(" Wind Heading: %i°, Speed: %i\n", loxz.direction, loxz.speed);

    /* Umwanddlung in Vektoren im Koordinatensystem */

    printf(" Wind Angle: %i° %.8f radians\n", alpha, conv_radians(loxz.direction));
    printf("Crosswind: %f\n", crosswind);
    return 0;
}
