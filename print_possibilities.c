//Program to print all possiblilities of given alphabet and length
//BUG doesn't work in C89 (only in C99)
#include <stdio.h>
#include <string.h>

int main()
{
        int stellen = 0;
    char alphabet[3] = {"abc"};
    size_t elemente_alphabet = strlen(alphabet);

    char variante[3] = {0};

    for (int i = 0; i < elemente_alphabet; i++) {
        variante[0] = alphabet[i];
        for (int j = 0; j < elemente_alphabet; j++) {
            variante[1] = alphabet[j];
            for (int k = 0; k < elemente_alphabet; k++) {
                variante[2] = alphabet[k];
                printf("%c %c %c\n", variante[0], variante[1], variante[2]);
            }
        }
    }



    printf("\a");
    return 0;
}
