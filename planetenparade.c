#include <stdio.h>
int main(void){


/*Wie oft kommt es vor, dass alle Planeten auf der Selben geraden liegen?
Ich möchte es insofern vereinfachen, dass ich die Planetenbahnen
als Distanz annehme und von einer Überschneidung ausgehe, wenn
alle Planeten in einem Bereich liegen, welcher für einen Erdentag
gültig ist.*/

//all Orbital periods in earth days
double mercury_period = 87.9691;
double venus_period = 224.701;
double earth_period = 365.25;
double mars_period = 686.98;
double jupiter_period = 4332.59;
double saturn_period = 10759.22;
double uranus_period = 30688.5;
double neptun_period = 60195;

double wahrscheinlichkeit_alle_auf_einer_linie =(1/mercury_period) * (1/venus_period) *
(1/earth_period) * (1/mars_period) * (1/ jupiter_period) *
(1/saturn_period) * (1/uranus_period) * (1/neptun_period);
printf("%.69f", wahrscheinlichkeit_alle_auf_einer_linie);

double tage = 1/ wahrscheinlichkeit_alle_auf_einer_linie;
printf("%e\n", tage/365.25);

double age_universe = 13.799e+9;
printf("%e", tage/age_universe);

return 0; }
