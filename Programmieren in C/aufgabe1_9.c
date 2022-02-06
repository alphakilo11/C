#include <stdio.h>

int main(void)
{
        int c, space_counter;

        space_counter = 0;
        while ((c = getchar()) != EOF) {
                if (c != ' ') {
                        putchar(c);
                        space_counter = 0;
                } else {
                        if (space_counter == 0) {
                                putchar(c);
                                space_counter = 1;
                        }
                }
        }
        return 0;
}
