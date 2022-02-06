/* Längste Zeile erkennen und ausgeben */
#include <stdio.h>
#include <limits.h>

unsigned long linie_lesen(char line[], unsigned long ULONG_MAX);
void copy(char to[], char from[]);

int main(void)
{
	unsigned long len;
	unsigned long max;
	char line[ULONG_MAX];
	char longest[ULONG_MAX];

	max = 0;
	while((len = linie_lesen(line, ULONG_MAX)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0)
		printf("%s", longest);
		printf("%lu", ULONG_MAX);
	return 0;
}

unsigned long linie_lesen(char s[], unsigned long lim)
{
	unsigned long c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
void copy(char to[], char from[])
{
	unsigned long i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
