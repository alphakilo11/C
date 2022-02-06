#include <time.h>
#include <stdio.h>

int main()
{

        double startTime = (float)clock()/CLOCKS_PER_SEC;
        for (int i = 0; i < 560345454; i++)
                569435 / i;


        double endTime = (float)clock()/CLOCKS_PER_SEC;

        double timeElapsed = endTime - startTime;
        printf("%f\n", timeElapsed);
        return 0;
}
