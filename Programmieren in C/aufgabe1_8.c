#include <stdio.h>

int main(void)
{
        int c, nl, tab, space;

        nl = 0;
        tab = 0;
        space = 0;
        while ((c = getchar()) != EOF)
                switch (c) {

                        case '\n':
                                ++nl;
                                break;

                        case '\t':
                                ++tab;
                                break;

                        case ' ':
                                ++space;
                                break;
                }
        printf("Zeilentrenner: %d, Tabs: %d, Leerzeichen: %d\n", nl, tab, space);
        return 0;
}
