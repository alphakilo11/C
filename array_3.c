#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void foo(double *buf, int count) {
        //int blub[] = {1, 3, 2, 5, 7, 8, 1, 2, 3, 5};
    for(int i = 0; i < count; ++i)
        buf[i] = rand();
}

int main() {
        srand(time(0));
    double arr[] = {0};
    foo(arr, 10);
    for (int i = 0; i < 10; i++) {
            printf("%f ", arr[i]);


    }
    printf("\n%f, \n", arr);
}
