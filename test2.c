#include "EX_Q_Codierung.c"
#include <stdio.h>
#include "b_adisch.c"

int main(void)
{
        int
                n = 8,
                k = 5;
        double r = 4.6;
	printf("c_{%i,8}(%i)\n",n, exq_code(n, -100));
        printf("%i\n", exq_decode(n, 27));
        printf("\n");
        for (int i = 0; i < 17; i++) {
                b_adisch_code(i, 2);
                printf("\t");
        }
	return 0;
}
