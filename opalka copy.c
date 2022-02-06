#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define OPALKA 5607249

int main()
{

    printf("%jd\n", time(0));
    unsigned int *leinwand = malloc(OPALKA * sizeof(unsigned int));
    time_t start = time(0);
    int j;
    for (j = 0; j < 1; j++){
        unsigned int i;
        for (i = 0; i < OPALKA; i++)
                leinwand[i] = i + 1;
    }
    printf("Dauer: %jd\n", time(0) - start);
    printf("%jd\n", clock());
    return 0;
}
