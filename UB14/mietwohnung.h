#ifndef MIETWOHNUNG_H_INCLUDED
#define MIETWOHNUNG_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>

typedef struct _mw {
    char *stadt;
    int flaeche;
    double preis;
} mw;

char *mw_stadt_get(mw *m);
int mw_flaeche_get(mw *m);
double mw_preis_get(mw *m);
int mw_stadt_set(mw *m, char *value);
int mw_flaeche_set(mw *m, int value);
int mw_preis_set(mw *m, double value);
int mw_stadt_check(char *m);
int mw_flaeche_check(int m);
int mw_preis_check(double m);
mw* mw_init(char *stadt, int flaeche, double preis);
void mw_print(mw *m);
double mw_qmp(mw *m);

#endif
