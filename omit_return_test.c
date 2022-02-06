#include <stdio.h>

int hello()
{
    if (1)
        printf("Hello World!");
        return 0;
    
    if (0)
        ;
    hello();

}

int main()
{
    hello();
}
