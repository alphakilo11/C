#include <stdio.h>

int euklidischer_algorithmus(int a, int b, int print);
int main(void)
{
        int a;
        int b;
        int print;
        printf("Bitte geben sie nacheinander zwei natürliche Zahlen mit max. 7 Stellen ein:");
        scanf("%i", &a);
        scanf("%i", &b);
        printf("Soll der Rechenweg angezeigt werden? (1 für Ja):");
        scanf("%i", &print);
        printf("Größter gemeinsamer Teiler ist: %i\n", euklidischer_algorithmus(a, b, print));
        return 0;
}
int euklidischer_algorithmus(int a, int b, int print)
/* berechnet den größten gemeinsamen Teiler von zwei Zahlen
Wenn als dritter Parameter 1 übergeben wird, so erfolgt eine Anzeige des Rechenweges.
LIMIT Natürliche Zahlen mit max. 7 Stellen
IMPROVE printf functions (maybe loops)
IMPROVE Eingabe der Parameter über Kommandozeile */
{
        if(print == 1) {
                printf("s\tt\tq\tr\tx\ty\tu\tv\n");
        }
        int x = 1;
        int y = 0;
        int u = 0;
        int v = 1;
        int s = a > b ? a: b;
        int t = a < b ? a: b;
        int s_anfang = s;
        int t_anfang = t;
        if(print == 1) {
                printf("%i\t%i\t\t\t%i\t%i\t%i\t%i\n", s, t, x, y, u, v);
        }

        while (t != 0)
        {

                int q = s / t;
                int r = s % t;
                int x_alt = x;
                int y_alt = y;
                s = t;
                t = r;
                x = u;
                y = v;
                u = x_alt - q * u;
                v = y_alt - q * v;
                if(print == 1){
                        printf("%i\t%i\t%i\t%i\t%i\t%i\t%i\t%i\n", s, t, q, r, x, y, u, v);
                }

        }
        if(print == 1){
                printf("Probe 1 (ggT = x * s + y * t): %i\t Probe 2 (0 = u * s + v * t): %i\n", s == x * s_anfang + y * t_anfang, 0 == u * s_anfang + v * t_anfang);
        }
        return s;
}
