#include <stdio.h>

int main()
{
    double ampere = 2.5; //A
    double time = 3600; // s
    double voltage = 1.5; // V
    double charge = ampere * time; // C
    double capacitancy = charge / voltage; //F
    printf("Charge: %f Coulomb, Capacitancy: %f Farad\n", charge, capacitancy);
    return 0;
}
