/* Using non-initialized variables as pseudo-random-number-generator */

#include <stdio.h>

int random()
{
    int x;
    return x;
}

int main()
{
    int i;
    for (i = 0; i < 10; i++)
        printf("%i\n", random());
    return 0;
}
