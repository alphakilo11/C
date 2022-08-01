#include <stdio.h>
#include <time.h>

#define REPETITIONS 23000000000

int main() {
    time_t start_time = time(NULL);
    for (long i = 0; i < REPETITIONS; i++) {
        ;
    }
    time_t now = time(NULL);
    double passed_time = difftime(now, start_time);
    double cpu_time = (double) clock() / CLOCKS_PER_SEC;
    printf("%li, %f, ", REPETITIONS, cpu_time);
    printf("%f, ", passed_time);
    printf("%li\n", now);
    return 0;
}
