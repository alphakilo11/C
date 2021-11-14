#include <stdio.h>
/*
somehow flawed
*/

int
main ()
{
  int volumen = (230.3 * 230.3 * 146.5) / 3;
  printf ("SteinblC6cke: %d\n", volumen);

  int bautage = (2580 - 2560) * 365.25;
  printf ("SteinblC6cke tC$glich: %d\n", volumen / bautage);

  printf ("Gewicht: %d t\n", volumen * 2.5);

  int volumen_heute = (225 * 225 * 138.75) / 3;
  printf ("Es wurden %d Prozent des Volumens abgetragen\n",
	  (1 - volumen / volumen_heute) * 100);

  int durchmesser_alt = 230;
  printf ("Unterschied SeitenlC$nge: %d cm", (230.3 - 225) * 100);

  return 0;
}
