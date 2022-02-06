#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define OPALKA 5607249

int main()
{

    unsigned int i;
    for (i = 0; i < OPALKA * 10; i++)
        ;
    printf("%jd\n", clock());
    printf("%u\n", i);
    return 0;
}
