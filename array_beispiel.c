#include <stdio.h>
#include <string.h>

int main(void)
{
    char satz[1024];
    char *p_satz;
    int satzlaenge;
    char neuersatz[1024];
    char *p_neuersatz;

    fgets( satz, 1024, stdin );
    p_neuersatz = neuersatz;

    for( p_satz = satz; p_satz < satz + ( strlen(satz)-1 ); p_satz += 2 )
    {
        *p_neuersatz = *p_satz;
        ++p_neuersatz;
    }

    for( p_satz = satz+1; p_satz < satz + ( strlen(satz)-1 ); p_satz += 2 )
    {
        *p_neuersatz = *p_satz;
        ++p_neuersatz;
    }

    *p_neuersatz = '\0';

    printf( "Original Satz: %s \n", satz );
    printf( "Verschluesselter Satz: %s \n", neuersatz );
    printf( "Der String ist %d Zeichen lang \n", strlen(satz)-1 );
    return 0;
}
