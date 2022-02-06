/*
BUG: I have to define test2 size which makes the whole thing inflexible
Function strtok from string.h
Don't call the function just to check a condition, because it will iterate.
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
        char test[] = "Alexander, Aaron, Rudolf, Pamina, Anja, Georg, Johanna";
        char test2[7][15];
        strcpy(test2[0], strtok(test, ","));
        printf("%s\n", test2[0]);
        int i = 1;
        while (1) {
                char *ergebnis = strtok(NULL, ", ");
                if (ergebnis != 0) {
                        strcpy(test2[i], ergebnis);
                        i++;
                        printf("%s\n", ergebnis);
                } else {
                        break;
                }
        }
        printf("%s", test2[0]);
        return 0;
}
