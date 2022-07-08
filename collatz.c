#include <stdio.h>
#include <time.h>

int main() {

    clock_t start, end;
    start = clock();

    unsigned long i, n;
    for (i = 1; i < 1e6; i++) {
        n = i;
        //printf("%i ", n);
        while (n != 1) {
            if (n % 2 == 0) {
                n = n / 2;
            }
            else {
                n = 3 * n + 1;
            }
            //printf("%i ", n);
        };
        //printf("\n");
    };
    end = clock();
    printf("%f", ((double) (end - start)) / CLOCKS_PER_SEC);
    return 0;
}
