#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main()
{
    struct _windinformation {
        int direction;
        int speed;
        int gust;
    };
    
    struct _windinformation loxz;
    loxz.direction = 45;
    loxz.speed = 12;
    loxz.gust = 25;

    int loxz_runway_hdg = 257;
    int alpha = loxz.direction - loxz_runway_hdg;
    double crosswind = (double) loxz.speed / 90 * alpha;

    printf(" Wind Heading: %i°, Speed: %i\n", loxz.direction, loxz.speed);

    /* Umwanddlung in Vektoren im Koordinatensystem */
    double result = sin(loxz.direction / 360 * 2 * PI);
    printf(" Wind Angle: %i° %f\n", alpha, result);
    printf("Crosswind: %f\n", crosswind);
    return 0;
}
