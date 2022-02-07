#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    long c, x;
    for (i = 0; i < 10000; i++) {
        x = random() % 5;
        if (c == x)
            ;
        else {
            printf("%li;", x);
            c = x;
        }
    }
    return 0;
}
