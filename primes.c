#include <time.h>
#include <stdio.h>
#include <math.h>

int is_prime(long number) {
    // only works with odd numbers > 2
    unsigned int i = 3;
    while (i <= pow(number, 0.5)) {
        if (number % i == 0) {
            return 0;
        };
        i += 2;
    };
    return 1;
};

int main() {
    unsigned int i = 3;
    unsigned int count = 0;
    unsigned int result;
    while (count < 999999) { // 2 is not considered for optimisation
        if (is_prime(i)) {
            count++;
            result = i;
        };
        i += 2;
    };
    printf("%i\n", result);
    return 0;
};