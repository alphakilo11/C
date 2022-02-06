#include <string.h>
#include <stdio.h>

int main () {
   char str[] = "12-23-24";
   const char s[] = "-";
   int *token;

   /* get the first token */
   token = strtok(str, s);

   /* walk through other tokens */
   while( token != NULL ) {
      printf( " %s\n", token );

      token = strtok(NULL, s);
   }

   return(0);
}
