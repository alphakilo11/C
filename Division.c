/* The result of 43/40 should look like this:

Ergebnis: 1, Rest: 3
Ergebnis: 0, Rest: 30
Ergebnis: 7, Rest: 20
Letzte Ziffer: 5
Counter: 3
*/
#include <stdio.h>

int main()
{

    double division(int dividend, const int divisor){
        int counter = 0;
        int letzte_ziffer_nur_einmal = 0;

        if (dividend%divisor == 0){
            return printf("Ergebnis: %d. Kein Rest.", dividend/divisor);
        }

        while (dividend%divisor != 0){

            printf("Ergebnis: %d, Rest: %d\n", dividend / divisor, dividend % divisor);
            dividend = (dividend%divisor)*10;
            counter++;
            if (counter >= 9){ //BUG doesn't work
                printf("Iteration limit exceeded - exiting!");
                break;
            }
            division(dividend, divisor);
            break;
        }
        if (dividend%divisor == 0) {
            if (letzte_ziffer_nur_einmal == 0){
                printf("Letzte Ziffer: %d\n", dividend/divisor);
                letzte_ziffer_nur_einmal = 1;
            }
        }
        printf("Counter: %d\n", counter);
    }


    division(43, 40);
    division(1, 3);

    return 0;
}
