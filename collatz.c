#include <stdio.h>

int main() {
    int n = 11;
    printf("%i ", n);
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2.0;
        }
        else {
            n = 3 * n + 1;
        }
        printf("%i ", n);
    }
    return 0;
}
