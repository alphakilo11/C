#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int read_vector(double p[]);
void add_vectors(double p1[], double p2[]);
double vector_length(double p[]);
void vector_norm(double p[]);
int vector_calc();
int flush_buff(void);
void clear_array(double array[]);

#define DIM 3
#define UMWANDLUNG_ERFOLGREICH 0
#define UMWANDLUNG_GESCHEITERT 1
#define BUFFERFEHLER 2
#define PROGRAMMABBRUCH 3

int main(void)
{
	int status = 0;
	do {
		status = vector_calc();
	} while (status == 0);
	printf("Programm wird beendet.");
	/* Testint i;
	double p[DIM] = {0};
	read_vector(p);
	for (i = 0; i < DIM; i++)
		printf("%f ", p[i]);
	*/
	return 0;
}


int read_vector(double p[])
/* Aufgabe 25 + 26 a) */
{

	int status;
	printf("Geben sie einen Vektor mit %i Dimensionen getrennt durch Semikolon ein:", DIM);
	status = scanf("%lf;%lf;%lf", &p[0], &p[1], &p[2]);
	printf("status: %i\n", status);
	if (status == EOF) {
		printf("BUFFERFEHLER.\n");
		flush_buff();
		clear_array(p);
		return BUFFERFEHLER;
	} else if (status != DIM) {
		printf("FEHLER: Bitte %i durch Semikolon getrennte Dezimalzahlen eingeben.\n", DIM);
		flush_buff();
		clear_array(p);
		return UMWANDLUNG_GESCHEITERT;
	}
	flush_buff(); /* Um jegliche Reste im Buffer zu eliminieren */
	return UMWANDLUNG_ERFOLGREICH;
}

void add_vectors(double p1[], double p2[])
/* Aufgabe 25 + 26 b) */
{
	int i = 0;
	for (; i < DIM; i++)
		p1[i] += p2[i];
}

double vector_length(double p[]){
	int i;
	double summe = 0;
	for (i = 0; i < DIM; i++)
		summe += pow(p[i], 2);
	return sqrt(summe);
}

void vector_norm(double p[])
{

}

int vector_calc()
/* Aufgabe 25 + 26 e) */
{
	char c;
	printf("Vektorrechner\nWählen Sie:\n+\tVektoraddition\nL\tVektorlänge\nN\tVektornormierung\nQ\tProgramm beenden\n");
	switch (c = getchar()) {
		case '+': {
			double p1[DIM], p2[DIM];
			int i;
			if (read_vector(p1) || read_vector(p2)) {
				printf("FEHLER: Die Vektoraddition benötigt zwei Vektoren mit je %i Dimensionen.\n", DIM);
				break;
			}
			add_vectors(p1, p2);
			printf("Ergebnis der Vektoraddition:\n");
			for(i = 0; i < DIM; i++)
				printf("%i. Dimension: %lf\n", i, p1[i]);
			break;
		}
		case 'L' : {
			double p[DIM];
			read_vector(p);
			printf("Die Länge des Vektors ist: %lf\n", vector_length(p));
			break;
		}
		case 'N' : {

		}
		case 'Q' : {
			return PROGRAMMABBRUCH;
		}
		default : printf("Ungültige Eingabe, bitte erneut versuchen.");
	}
	return 0;
}

int flush_buff(void)
{
  int c;
  while ((c = getchar ()) != '\n' && c != EOF)
    {
    }
  return c != EOF;
}

void clear_array(double array[])
/* füllt ein DIM-langes array mit 0 */
{
	int i;
	for (i = 0; i < DIM; i++)
		array[i] = 0;
}
