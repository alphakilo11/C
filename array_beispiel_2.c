#include <stdio.h>

void foo(char *buf, int count) {
    for(int i = 0; i < count; ++i)
        buf[i] = i;
}

int main() {
    char arr[] = {0};
    foo(arr, 10);
    for (int i = 0; i < 10; i++) {
            printf("%i, ", arr[i]);
    }
    // No need to deallocate because we allocated
    // arr with automatic storage duration.
    // If we had dynamically allocated it
    // (i.e. malloc or some variant) then we
    // would need to call free(arr)
}
