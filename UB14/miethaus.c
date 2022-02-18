typedef struct _wliste {
    mw *wohnung;
    struct _wliste *next;
} wliste;

typedef struct _mh{
    wliste *wohnungen;
    char *name;
} mh;

void wliste_destroy(wliste *m){
    /* THIS IS A DUMMY */
    free(m);
}

int mh_wohnungen_set(mh *x, wliste *list){
    x->wohnungen = list;
    return 0;
}
int mh_name_set(mh *x, char *name){
    x->name = name;
    return 0;
}

int mh_destroy(mh *x){
    wliste_destroy(x->wohnungen);
    free(x->wohnungen);
    free(x->name);
    free(x);
    return 0;
}
