#include <stdio.h>

int input_integer(int anzahl)
{
        int ergebnis[anzahl];
        for(int i = 0; i < anzahl; i++)
        {
                scanf("%i", &ergebnis[i]);
        }
        printf("\n%i", ergebnis[2]);
        return ergebnis[anzahl];
}
int main(void)
{
        int anzahl_parameter = 3;

        int input[anzahl_parameter];
        input[anzahl_parameter] = input_integer(anzahl_parameter); /* das ist vermutlich fehlerhaft, da die Ausgabe nach der Rückgabe nicht stimmt. */
        for(int j = 0; j < anzahl_parameter; j++) {
                printf("%i ", input[j]);
        }
        printf("\n%i", input[2]);
        return 0;
}
