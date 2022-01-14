/* how long will an object travel at constant acceleration*/
#include <stdio.h>
#include <math.h>

int main()
{
	double distance = 10;
	double acceleration = 1;
	double travel_time = (-1) * (1 - sqrt(1 + 8 * (distance / acceleration))) / 2;
	printf("%f\n", travel_time);
	return 0;
}