/* Robert Lorenz im Plenum am 6. Dezember 2021 */

#include <stdio.h>
#include <string.h>

int main()
{
    char tr[2];
    printf("Trennzeichen eingeben:\n");
    char t = getchar();
    getchar();
    tr[0] = t;
    tr[1] = '\0';
    char format[20];
    format[0] = '\0';
    strcat(format, "%lf");
    strcat(format, tr);
    strcat(format, "%lf");

    double x, y;
    printf("2 doubles eingeben:\n");
    scanf(format, &x, &y);
    printf("%f, %f,", x, y);
    return 0;
}
