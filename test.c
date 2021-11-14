#include <stdio.h>


int main(void)
{
        int ausgangszahl, basis;
        ausgangszahl = 89;
        basis = 2;
                char result[] = {0};
                char *p_result;
                p_result = result;
                int i = 0;


                while (ausgangszahl > 0) {

                int a = ausgangszahl / basis;
                int b = ausgangszahl % basis;
                ausgangszahl = a;
                p_result[i] = (char) b;
                p_result++;
                i++;
        }
        int j = 0;
        while ( j < 10) {
                printf("%c, ", result[i]);
                j++;
        }

        return 0;
}
