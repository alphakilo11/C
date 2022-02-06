#include <stdio.h>
#include <stdlib.h>

void test(char **s)
{
    *s = *s +1;
}

int main(void)
{
    printf("%s\n", argv[0]);
    test(&argv[0]);
    printf("%s\n", argv[0]);
    ++argv[0];
    printf("%s\n", argv[0]);    
    return 0;
}