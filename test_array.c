#include <stdio.h>

#define OPALKA 5
int main(void)
{
    int a = 4;
    int i;
    int vaslov[OPALKA] = {1, 2, 3, 4, 5};
    for (i = 0; i < OPALKA; i++)
        printf("%i ", vaslov[i]);
    vaslov[OPALKA] = 23;
    vaslov[OPALKA + 10] = 25;
    printf("%i", vaslov[OPALKA + 10]);
    return 0;
}
