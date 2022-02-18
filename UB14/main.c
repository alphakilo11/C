#include <stdio.h>
#include <string.h>
#include "mietwohnung.c"
#include "miethaus.c"

int main(void)
{
    char *stadtnamen[] = {"Augsburg", "Berlin", "Brandenburg", "Gladbach"};
    int flaechen[4] = {45, 60, 78, 120};
    double preise[4] = {500, 800.72, 855, 1400};

    int i;
    mw *m;
    for (i = 0; i < 4; i++){
        m = mw_init(stadtnamen[i], flaechen[i], preise[i]);
        mw_print(m);
        printf("%.2f €/qm\n", mw_qmp(m));
    }

    return 0;
}
