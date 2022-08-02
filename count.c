#include <stdio.h>
#include <time.h>

#define REPETITIONS 16428571420

int main() {
    time_t start_time = time(NULL);
    long i = 0;
    while (i < REPETITIONS){
        i++;
    }
    time_t now = time(NULL);
    int passed_time = difftime(now, start_time);
    double cpu_time = (double) clock() / CLOCKS_PER_SEC;
    printf("%li repetitions, %f CPU-Time, ", REPETITIONS, cpu_time);
    printf("Time passed: %i s, Frequency: %li Hz", passed_time, i / passed_time);
    printf("%li\n", now);
    return 0;
}
