/*
Schreiben Sie ein Programm, das seine Eingabe ausgibt, und zwar ein Wort pro Zeile.
*/
#include <stdio.h>

#define OUT 0
#define IN 1
#define SEP '\n'

int main(void)
{
        int c, state;

        state = OUT;
        while ((c = getchar()) != EOF) {
                if (c == ' ' || c == '\t' || c == '\n') {
                        if (state == IN) {
                                putchar(SEP);
                        }
                        state = OUT;
                        putchar(c);
                } else {
                        putchar(c);
                        state = IN;
                }
        }

        return 0;
}
