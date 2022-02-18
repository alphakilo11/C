#include "mietwohnung.h"

char *mw_stadt_get(mw *m) {
    return m->stadt;
}

int mw_flaeche_get(mw *m) {
    return m->flaeche;
}

double mw_preis_get(mw *m) {
    return m->preis;
}
int mw_stadt_set(mw *m, char *value) {
    if (mw_stadt_check(value)){
        m->stadt = value;
        return 0;
    }
    return 1;
}

int mw_flaeche_set(mw *m, int value) {
    if (mw_flaeche_check(value)) {
        m->flaeche = value;
        return 0;
    }
    return 1;
}

int mw_preis_set(mw *m, double value){
    if (mw_preis_check(value)) {
        m->preis = value;
        return 0;
    }
    return 1;
}

int mw_stadt_check(char *m) {
    int i;
    for (i = 0; ((m[i] != '\0') && (i < 20)); i++) {
        if (((m[i] >= 'A') && (m[i] <= 'Z')) || ((m[i] >= 'a') && (m[i] <= 'z')) || (m[i] == ' '))
            ;
        else {
            printf("ERROR: Illegal char detected: %c\n", m[i]);
            return 0;
        }
    }
    if (m[i] != '\0') {
        printf("ERROR; String too long.");
        return 0;
    
    }
    return 1;
}

int mw_flaeche_check(int m){
    return (m > 0);
}

int mw_preis_check(double m){
    return (m > 0);
}

mw *mw_init(char *stadt, int flaeche, double preis){
    mw *neu;
    if (!(neu = malloc(sizeof(int))))
        return NULL;
    mw_stadt_set(neu, stadt);
    mw_flaeche_set(neu, flaeche);
    mw_preis_set(neu, preis);
    return neu;
}

void mw_print(mw *m) {
    printf("%s %i qm %.2f €\n", m->stadt, m->flaeche, m->preis);
}

double mw_qmp(mw *m){
    return m->preis / m->flaeche;
}
