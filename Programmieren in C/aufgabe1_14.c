#include <stdio.h>

#define ANFANG_ZEICHEN 32
#define ANZAHL_ZEICHEN 127

int main(void)
{
	int zeichen[ANZAHL_ZEICHEN] = {0};
	int i;
	char c;

	while ((c = getchar()) != EOF) {
		++zeichen[c];
	}
	for (i = ANFANG_ZEICHEN; i < ANZAHL_ZEICHEN; i++)
		printf("'%c': %i|", i, zeichen[i]);
	return 0;
}
