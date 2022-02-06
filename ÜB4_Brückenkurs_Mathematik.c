#include <stdio.h>


int funktion(int summand)
{
    return 2 * summand - 1;
}


int summe(int laufindex, int obere_summationsgrenze)
{
    int summe = 0;
    for (int i = laufindex; i <= obere_summationsgrenze; i++)
    {
        int r = funktion(i);
        printf("%i ", r);
        summe += r;
    }
    return summe;
}
int main()
{
        int n = 16;
    printf("%i\n", summe(1, n));
    printf("%i\n", 1 + 3 + 5 + 7 + (2 * (n - 1) - 1) + (2 * n - 1));
    printf("%i\n", n * n);
    for (int n = 1; n < 5; n++)
    {
            printf("%i ", (2 * (n - 1) - 1) + (2 * n - 1));
    }
    return 0;
}
