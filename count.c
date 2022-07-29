#include <stdio.h>
#include <time.h>

int main() {
    time_t start_time = time(NULL);
    long long count = 0;
    while (count < 23000000000) {
        count++;
    }
    time_t now = time(NULL);
    double passed_time = difftime(now, start_time);
    double cpu_time = (double) clock() / CLOCKS_PER_SEC;
    printf("%lli, %f, ", count, cpu_time);
    printf("%f, ", passed_time);
    printf("%li\n", now);
    return 0;
}
