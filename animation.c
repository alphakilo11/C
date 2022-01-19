#include <stdio.h>
#include <time.h>

#define FPS 25

int main()
{

    struct timespec tim, tim2;
    tim.tv_sec = 0;
    tim.tv_nsec = 1000000000 / FPS; /* sleep time in nanoseconds */

    printf("\e[?25l"); /* hide cursor */

	int i, j;
	for (i = 0; i < 125; i++) {
		for (j = 0; j < i; j++)
			printf("\b");
		for (j = 0; j < i; j++)
			printf(" ");
		printf("A");
        fflush(stdout); /* otherwise printf is buffered until the loop has finished */
        nanosleep(&tim , &tim2);
	}
    printf("\e[?25h"); /* unhide cursor */
	return 0;
}
