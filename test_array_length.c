#include <stdio.h>

int count(char** input){
    return sizeof(input) / sizeof(input[0]);
}

int main()
{
    char* test[] = {
        {"Hello!"},
        {"Bonjour"},
        {"Bongiorno"}
    };
    
    printf("main: %i\n", sizeof(test) / sizeof(test[0]));
    printf("function: %i\n", count(test));
    return 0;
}
