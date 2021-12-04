#include <stdio.h>
#include <math.h>
double geometric_mean(const double x[], const int n);
int main()
{

    double x[] = {4, 1, 1.0/32};
    long int n = sizeof(x) / sizeof(double);
    printf("%f\n", geometric_mean(x, n));
}

double geometric_mean(const double x[], const int n)
{
    int i;
    double sum = x[0];
    for (i = 1; i < n; i++){
        sum *= x[i];
    }
    return pow(sum, 1.0/n);
}
