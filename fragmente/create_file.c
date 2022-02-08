#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, x;
    long c;
    for (i = 0; i < 10000; i++) {
        x = random() % 65536;
        /* scanf("%i", &x); */
        /* print changes only */
        if (c == x)
            ;
        else {
            printf("%lu:%i;", clock(), x);
            c = x;
        }
    }
    return 0;
}
