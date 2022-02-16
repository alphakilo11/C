#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define DAY 1
#define MONTH 2
#define YEAR 3

typedef struct _datum {
    int day;
    int month;
    int year;
} datum;

#endif
int datum_get_tag(const datum *m) {
  return m -> day;
}

int datum_check(const int value, const int item) {
  switch (item) {
  case DAY: 
    if (value > 0 && value < 32)
      return 1;

  case MONTH: 
    if (value > 0 && value < 13)
      return 1;

  case YEAR:
    if (value > 1582 && value < 10000) /* ISO 8601 */
      return 1;
  default:
    return 0;
  }
}

int datum_set(datum *m, const int value, const int item) {
  if (datum_check(value, item)) {
   
  switch (item)
  {
    case DAY: 
        m -> day = value;

    case MONTH:
        m -> month = value;

    case YEAR:
        m -> year = value;

    default:
        return 1;
  }
}
  return 0;
}

void datum_init (datum *m, const int tag, const int monat, const int jahr) {
  datum_set(m, tag, DAY);
  datum_set(m, monat, MONTH);
  datum_set(m, jahr, YEAR);
}

int main(void)
{
  datum *eins = malloc(3 * sizeof(int));
  datum_init(eins, 25, 1, 2022);
  printf("%i", datum_get_tag(eins));
  return 0;
}
