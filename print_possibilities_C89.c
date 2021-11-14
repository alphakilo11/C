//C89 Program to print all possiblilities of given alphabet and length
#include <stdio.h>
#include <string.h>

int main()
{

    char alphabet[3] = {"abc"};
    int elemente_alphabet = strlen(alphabet);

    char variante[3] = {0};
    int i, j, k;

    for (i = 0; i < elemente_alphabet; i++) {
        variante[0] = alphabet[i];
        for (j = 0; j < elemente_alphabet; j++) {
            variante[1] = alphabet[j];
            for (k = 0; k < elemente_alphabet; k++) {
                variante[2] = alphabet[k];
                printf("%c %c %c\n", variante[0], variante[1], variante[2]);
            }
        }
    }



    printf("\a");
    return 0;
}
