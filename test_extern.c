/* Undefined symbols for architecture arm64:
  "_a", referenced from:
      _main in test_extern-6aad47.o
      _dazu in test_extern-6aad47.o
  "_b", referenced from:
      _dazu in test_extern-6aad47.o
      _vereinbarung in test_extern-6aad47.o
ld: symbol(s) not found for architecture arm64
clang: error: linker command failed with exit code 1 (use -v to see invocation) */

#include <stdio.h>

void dazu(void);
void vereinbarung();

int main(void)
{
        extern int a;
        a = 5;
        vereinbarung();
        dazu();
        return 0;

}
void dazu(void)
{
        extern int a;
        extern int b;
        printf("%i", a + b);
}

void vereinbarung()
{
        extern int b;
        b = 3;
}
