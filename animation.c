#include <stdio.h>
#include <time.h>

int main()
{

   struct timespec tim, tim2;
   tim.tv_sec = 1;
   tim.tv_nsec = 500000000L;


	int i, j;
	for (i = 0; i < 125; i++) {
		for (j = 0; j < i; j++)
			printf("\b");
		printf("A");
   if(nanosleep(&tim , &tim2) < 0 )   
   {
      printf("Nano sleep system call failed \n");
      return -1;
   }

   printf("Nano sleep successfull \n");
	}
	return 0;
}