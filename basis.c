#include <stdio.h>
int main()
{
    printf("test\n");

    //Makro
    #define multi(x, y) ((x) * (y))
    printf("%d\n",multi(5, 6));

    //Schleife
    for (int i = 0; i < 10; i++)
        {
            printf("%d", i);
        }

    //Funktion
    int checktrue(int a) {
        if (a == 5) {
            return 1;
        }
        return 0;
    }
    printf("\n%d", checktrue(5));

    //Benutzereingabe
    int zahl;
    printf("Bitte geben Sie eine Zahl ein: ");
    scanf("%d", &zahl);

    return 0;
}
