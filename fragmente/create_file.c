#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *fp = NULL;
    fp = fopen("test1.txt" ,"a");
    int i, x;
    long c;
    for (i = 0; i < 10000; i++) {
        x = random() % 65536;
        /* scanf("%i", &x); */
        /* print changes only */
        if (c == x)
            ;
        else {
            fprintf(fp, "%lu:%i;", time(0), x);
            c = x;
        }
    }
    fclose(fp);
    return 0;
}
