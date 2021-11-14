#include <stdio.h>

int main(void)
{
        char arr1[] = {'a', 'b', 'c', 'd', 'e', 'f'};
        char arr2[] = "Ich gehe zur Schule.";
        char arr3[] = "";

        char *p_arr1;
        char *p_arr3;
        p_arr1 = arr1;
        p_arr3 = arr3;

        *p_arr3 = *p_arr1;

        printf("%s\n%s\n%s", arr1, arr2, arr3);
        return 0;
}
