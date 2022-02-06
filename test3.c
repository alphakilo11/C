#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
        srand(time(0));
        double rand1 = rand();
        double rand2 = rand();
        double a = rand1 / rand2;
        printf("%f %f %f\n", a, ceil(a), (ceil(a) - a) < (a - floor(a)) ? ceil(a) : floor(a));
        printf("%i\n", 16 > pow(2,4));


        int c, x;
        c = 'f';
        x = 0;
        if (c == 'e') {
                printf ("%e\n", x);
        } else {
                if (c == 'f') {
                        printf("%f\n", x);
                } else {
                        printf("Invalid!\n");
                }
        }


        return 0;
}
