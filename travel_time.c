/* how long will an object travel at constant acceleration
https://space.stackexchange.com/questions/840/how-fast-will-1g-get-you-there
https://en.wikipedia.org/wiki/Space_travel_under_constant_acceleration */
#include <stdio.h>
#include <math.h>

double acceleration(double delta_speed, double delta_time)
{
	return (delta_speed / delta_time);
}

int main()
{
	double delta_speed = 530 / 3.6; //Dragrace is not constant acceleration
	double delta_time = 3.73;
	double average_acceleration = acceleration(delta_speed, delta_time);
	double distance = (average_acceleration * pow(delta_time, 2));
	double distance2 = ((delta_time * (delta_time + 1)) / 2) * average_acceleration;
	printf("Average Acceleration: %f\t Distance: %f %f\n", average_acceleration, distance, distance2);

	/*
	double distance = 100000000;
	double acceleration = 9.81;
	int i;
	for (i = 1; i < 100; i++) {
		distance = i * 10;
		double travel_time = (-1) * (1 - sqrt(1 + 8 * (distance / acceleration))) / 2;
		printf("%f\t", travel_time);
		printf("%f\n", sqrt(2 * distance / acceleration));
	}
	*/
	return 0;
}