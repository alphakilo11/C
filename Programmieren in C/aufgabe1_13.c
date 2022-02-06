/*
Schreiben Sie ein Programm, das ein Histogramm der Längen der eingegebenen Wörter ausgibt.
*/
#include <stdio.h>

#define OUT 0
#define IN 1
#define MAX_WORT_LAENGE 44 /* Laengstes Wort im Duden hat 44 Zeichen */

int main(void)
{
	int wortlaenge[MAX_WORT_LAENGE + 1] = {0};
	int i, status;
	char c;

	status = OUT;
	i = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (status == IN) {
				status = OUT;
				++wortlaenge[i];
				i = 0;
			}
		} else {
			status = IN;
			i++;
		}
	}

	for (i = 0; i <= (MAX_WORT_LAENGE); i++)
		printf("%i ", wortlaenge[i]);

	return 0;
}
