//C89 Program to print all possiblilities of given alphabet and length
//V2: use recursive loop to automatically adjust for stellen and length of elemente_alphabet
//BUG Endlosschleife - kann ich ein array nutzen?
#include <stdio.h>
#include <string.h>

int stellen = 3;
char alphabet[3] = {"abc"};
int elemente_alphabet;
int i;

int stelleniteration(int zaehler) {

        for (i = 0; i < elemente_alphabet; i++){
                printf("%c ", alphabet[i]);
                if (zaehler >= stellen - 1) {
                        printf("\n");
                        return zaehler - 2;
                }
                else {
                        zaehler = stelleniteration(++zaehler);
                }
        }
}

int main()
{

        elemente_alphabet = strlen(alphabet);

    stelleniteration(0);


    printf("\a");
    return 0;
}
