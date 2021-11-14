#include <stdio.h>
#define TYPE double
#define BASIS 26
TYPE faculty(TYPE n);

int main(void)
{
        printf("%e Varianten einen Zug mit BASIS Soldaten antreten zu lassen.\n41 Varianten pro DIN A4 Blatt.\n5 g pro Blatt\n%e Tonnen wiegen die Blätter mit allen Varianten\n0.08 mm dick\n%e m Stapelhöhe aller Blätter. Das sind %e Lichtjahre.\nZum Vergleich: Das beobachtbare Universum hat einen Durchmesser von min. 9e10 Lichtjahren.", faculty(BASIS), faculty(BASIS) / (1800 / BASIS+1) * 5 /1e6, faculty(BASIS) / (1800 / BASIS+1) * 0.08 / 1000, (faculty(BASIS) / (1800 / BASIS+1) * 0.08 / 1000) / (3e8*3600*365));
        return 0;
}
TYPE faculty(TYPE n) {
    /*Permutation ohne Wiederholung
    Eine Permutation ohne Wiederholung ist eine Anordnung von n Objekten, die alle unterscheidbar sind.*/
    TYPE result = n;
    while(n > 1) {
        result = result * --n;
    }
    return result;
}
