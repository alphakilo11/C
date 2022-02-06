#include <math.h>

int exq_code(int n, int x)
{
        /* Returns EX-Q-Coded integers
        Input1: number of available Bits
        Input2: number to encode*/
	int q = pow(2, n - 1) - 1;
	return x + q;
}
int exq_decode(int n, int x)
{
        /* Returns EX-Q-Decoded integers
        Input1: number of available Bits
        Input2: number to decode*/
	int q = pow(2, n - 1) - 1;
	return x - q;
}
