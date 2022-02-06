#include <stdio.h>
#include <time.h>

int main() {
    struct timespec res;
    struct timespec time;

    clock_getres(CLOCK_REALTIME, &res);
    clock_gettime(CLOCK_REALTIME, &time);

    printf("CLOCK_REALTIME: res.tv_sec=%lu res.tv_nsec=%lu\n", res.tv_sec, res.tv_nsec);
    printf("CLOCK_REALTIME: time.tv_sec=%lu time.tv_nsec=%lu\n", time.tv_sec, time.tv_nsec);
}