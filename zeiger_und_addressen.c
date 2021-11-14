#include <stdio.h>

int main(void)
{


        int a, *pa;
        pa = &a;
        *pa = 123;
        printf("%i", a);

        return 0;
}
