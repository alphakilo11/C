#include <stdio.h>
#include <time.h>

int main() {
    time_t start_time = time(NULL);
    long long count = 0;
    while (count < 23000000000) {
        count++;
    }
    printf("%lli, CPU-Time: %f s", count, (double) clock() / CLOCKS_PER_SEC);
    printf("Time: %f", difftime(time(NULL), start_time));
    return 0;
}
