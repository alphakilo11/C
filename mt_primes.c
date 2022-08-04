/*
Program that calculates prime numbers and prints the last one to CLI.
Arguments:  start_number, number_of_primes, increment
Example: "./a.out 3 999999 2" prints the one-millionth prime (15485863) and calculates every one starting at 3.
*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int is_prime(unsigned number) {
    // returns 1 of number is a prime number.
    //works with odd numbers > 2 & < UINT_MAX
    unsigned int i = 3;
    while (i <= pow(number, 0.5)) {
        if (number % i == 0) {
            return 0;
        };
        i += 2;
    };
    return 1;
};

int main(int argc, char *argv[]) {
    unsigned int i = atoi(argv[1]);
    unsigned int count = 0;
    unsigned int result;
    while (count < atoi(argv[2])) { // 2 is not considered for optimisation
        if (is_prime(i)) {
            count++;
            result = i;
        };
        i += atoi(argv[3]);
    };
    printf("%i\n", result);
    return 0;
};