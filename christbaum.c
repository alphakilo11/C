//Christbaum
#include <stdio.h>

int main(void)
{
    int lineno;
    int height  = 6;

    for (int anzahlleerzeichen = 0; anzahlleerzeichen <= height - 1; anzahlleerzeichen++) {
        printf(" ");
    }
    printf("/\\\n");

    for (lineno = 1; lineno <= height; lineno++) {
      int column;

      for (int anzahlleerzeichen = 0; anzahlleerzeichen <= height - lineno; anzahlleerzeichen++ ) {
          printf(" ");
      }

      for (column = 0; column < lineno; column++) {
           printf("#");
      }

        for (column = 0; column < lineno; column++) {
           printf("#");
      }

     putchar('\n');
    }
    return 0;
}
