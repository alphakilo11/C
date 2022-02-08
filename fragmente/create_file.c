#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    long c, x;
    for (i = 0; i < 10000; i++) {
        x = random() % 65536;
        if (c == x)
            ;
        else {
            printf("%li:%li;", time(0), x);
            c = x;
        }
    }
    return 0;
}
