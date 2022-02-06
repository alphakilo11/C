#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        const char *hexstring = "abcdef0";
        int number = (int)strtol(hexstring, NULL, 16);
        printf("%i", number);

        return 0;
}
