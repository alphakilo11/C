#include <stdio.h>

int main()
{
        while (1) {
                char x = getchar();
                if (x == '\n' || x == EOF)
                        break;
                putchar(x);
        }
        return 0;
}
