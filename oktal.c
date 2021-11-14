#include<stdio.h>
int main(void)
{
        int oktal = 035;
        printf("%i %o %x", oktal, oktal, oktal);
        oktal = 0x35;
        printf("%i %o %x", oktal, oktal, oktal);
        return 0;
}
