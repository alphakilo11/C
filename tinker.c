#include <stdio.h>

//works only up to 2^30
//ADD wurzel
//ADD negative Hochzahlen
int main()
{
    printf("Hello World");

    printf("55");

    long int xhochy(long int x, long int y) {
        if (y == 0){
            return 1;
        }
        if (y >= 1){
            long int summe = x;
            for (long int i = 1; i < y; i++) {
                summe = summe * x;
            }
        return summe;
        }
    }

    printf("Resultat: %-25dtest\n", xhochy(25,3));
    printf("%e\n", (0.33) * 3);
    printf("%i", 25%9);
    return 0;
}
