#include <stdio.h>
#include <time.h>

int main() {
    long long count = 0;
    while (count < 23000000000) {
        count++;
    }
    printf("%lli, Time: %f s", count, (double) clock() / CLOCKS_PER_SEC);
    return 0;
}
