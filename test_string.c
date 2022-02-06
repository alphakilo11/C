#include <stdio.h>
#include <string.h>

int main()
{
        char a[] = "Test";
        char b[] = "Hallo";
        printf("[%s]\na: [%s]\nb: [%s]\n",strcpy(a, b), a, b);
        return 0;
}
