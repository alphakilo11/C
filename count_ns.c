//measure the time necessary for a singe incrementation (eg count++)
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define REPETITIONS 360000

int main() {
    time_t start_time = time(NULL);
    long long count = 0;
    clock_t *timelist = malloc((REPETITIONS / 1800) * sizeof(clock_t));
    time_t beginn_count;

    while (count < REPETITIONS) {
        beginn_count = clock();

        count++;

        timelist[count] = clock() - beginn_count;
    }
    time_t now = time(NULL);
    double passed_time = difftime(now, start_time);
    double cpu_time = (double) clock() / CLOCKS_PER_SEC;

    long long sum = 0;
    for(long long i = 0; i < REPETITIONS; i++) {
        sum += timelist[i];
    }
    free(timelist);

    printf("%lli, %f, ", count, cpu_time);
    printf("%f, ", passed_time);
    printf("%li, ", now);
    printf("%lli\n", sum);
    return 0;
}
