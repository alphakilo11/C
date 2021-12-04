#include <stdio.h>
double arithmetic_mean(const double x[], const int n);
int main()
{

    double x[] = {1.2,2.4,2.3,3.8,4.75,7.77,9.89};
    long int n = sizeof(x) / sizeof(double);
    printf("%f\n", arithmetic_mean(x, n));
}

double arithmetic_mean(const double x[], const int n)
{
    int i;
    double sum;
    for (i = 0; i < n; i++){
        sum += x[i];
    }
    return sum / n;
}
