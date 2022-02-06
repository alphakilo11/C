#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define OPALKA 5607249

int main()
{
    int j;
    for (j = 0; j < 10; j++){
        unsigned int i;
        unsigned int *leinwand = malloc(OPALKA * sizeof(unsigned int));
        for (i = 0; i < OPALKA; i++)
                leinwand[i] = i + 1;
    }
    printf("%jd\n", clock());
    return 0;
}
