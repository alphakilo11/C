/*
Schreiben Sie ein Programm, das die Eingabe zur Ausgabe kopiert und dabei jedes Tabulatorzeichen durch \t ersetzt, jeden backspace durch \b und jeden Gegenschrägstrich durch \\. Dadurch werden Tabulatorzeichen und backspace-Zeichen eindeutig sichtbar.
*/
#include <stdio.h>

int main(void)
{
        int c;

        while ((c = getchar()) != EOF) {
                switch (c) {

                        case '\t' :
                                putchar('\\');
                                putchar('t');
                                break;

                        case '\b' : /*Diesen Teil konnte ich noch nicht testen, da ich keine backspace in den Stream schicken kann*/
                                putchar('\\');
                                putchar('b');
                                break;

                        case '\\' :
                                putchar('\\');
                                putchar('\\');
                                break;

                        default :
                                putchar(c);
                }
        }
        return 0;
}
