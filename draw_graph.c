/* BUG x-axis spacing does not correspond to marks
BUG when more than one value with the same y-values exits, than the x spacing is wrong (gets added up)
*/
#include <stdio.h>

#define ROWS 10
#define COLUMNS 10
#define NUMBER_OF_DATAPOINTS 3
int main()
{
    int datapoints[3][2] = {
        { 3, 7},
        { 7, 7},
        { 9, 3}
    };

    int i, j;
    int index_to_assess = 0;
    for (i = ROWS; i > 0; i--) {
        printf("%2i", i); /* this has to be changed if the y-axis has more than to digits of rows */
        while (datapoints[index_to_assess][1] == i) {
            for (j = 0; j < datapoints[index_to_assess][0]; j++ )
                printf("  ");
            printf("X");
            index_to_assess++;
        }
        printf("\n");
    }

    for (i = 0; i <= COLUMNS; i++)
        printf("%2i ", i);
/*    printf("%i %i", index_to_assess, datapoints[0][0]); */
    return 0;
}
