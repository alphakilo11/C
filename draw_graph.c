/* 
Simple CLI plotter for 2-dimensional graphs
ENHANCE auto sort data
ENHANCE auto scale axis
*/
#include <stdio.h>

#define ROWS 20
#define COLUMNS 20

void sort_array(int foo[]) {
    
}

int main()
{
    /* Data */
    int datapoints[][2] = { /* has to be sorted by y-value in descending order */
        { 9, 19},
        { 8, 8},
        { 7, 7},
        { 6, 6},
        { 5, 5},
        { 4, 4},
        { 3, 3},
        { 2, 2},
        { 1, 1}
    };

    int test[] = { 5, 3, 6, 7, 1, 3, 6};


    /* Y axis label and plots */
    int i, j, x_pos;
    int index_to_assess = 0;
    x_pos = 0;
    for (i = ROWS; i > 0; i--) {
        printf("%2i", i); /* Y axis label; this has to be changed if the y-axis has more than 2 digits of rows */
        while (datapoints[index_to_assess][1] == i) {
            for (j = x_pos; j < datapoints[index_to_assess][0]; j++ ) {
                printf("   ");
                x_pos++;
            }
            printf("X");
            index_to_assess++;
        }
        x_pos = 0;
        printf("\n");
    }

    /* X axis label */
    printf(" ");
    for (i = 0; i <= COLUMNS; i++)
        printf("%2i ", i);
/*    printf("%i %i", index_to_assess, datapoints[0][0]); */
    return 0;
}
