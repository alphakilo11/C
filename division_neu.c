/*
Division unter Verwendung von != 0, ++, --
Funktioniert bei Natürlichen Zahlen.
TODO return values
*/

#include <stdio.h>

void division(int dividend, int divisor)
{
        if(divisor == 0){
                printf("Division durch 0 ist nicht definiert.");
                return;
        }

        int quotient = 0;
        int rest = 0;

        while(dividend != 0) {
                rest = divisor;

                while(rest != 0 && dividend != 0) {
                        dividend--;
                        rest--;
                }
                if(dividend != 0){
                        quotient++;
                }
        }
        /*Das finde ich nicht sehr elegant //AK */
        if(rest == 0){
                rest = divisor;
                quotient++;
        }
        printf("Quotient: %i, Rest: %i", quotient, divisor - rest);
}

int main(void)
{
        division(59546979, 4466);
        return 0;
}
