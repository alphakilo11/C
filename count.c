#include <stdio.h>
#include <time.h>

int main() {
    long long count = 0;
    while (count < 20000000000 / 12 * 10 ) {
        count++;
    }
    printf("%lli, Time: %f s", count, (double) clock() / CLOCKS_PER_SEC);
    return 0;
}
