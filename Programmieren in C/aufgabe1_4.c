
#include <stdio.h>

/* Umwandlung von Fahrenheit in Celsius fuer fahr = 0, 20, 300; Version mit Gleitpunkt */

main()
{
        float fahr, celsius;
        int lower, upper, step;

        lower = -20; /* untere Grenze der Temperaturtabelle */
        upper = 150; /* obere Grenze */
        step = 10; /* Schrittbreite */

        printf(" °C\t°F\n");
        celsius = lower;
        while (celsius <= upper) {
                fahr = (9.0 / 5.0) * celsius + 32.0;
                printf("%3.0f %6.1f\n", celsius, fahr);
                celsius = celsius + step;
        }
}
