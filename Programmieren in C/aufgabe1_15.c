
#include <stdio.h>

/* Umwandlung von Fahrenheit in Celsius fuer fahr = 0, 20, 300; Version mit Gleitpunkt */

double convert_c_to_f(double cel);

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
                fahr = convert_c_to_f(celsius);
                printf("%3.0f %6.1f\n", celsius, fahr);
                celsius = celsius + step;
        }
}
double convert_c_to_f(double cel)
{
        return (9.0 / 5.0) * cel + 32.0;        
}
