#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define DAY 1
#define MONTH 2
#define YEAR 3

#define PRINT_DATE_ISO8601(x) {printf("%4i-%2i-%2i\n", datum_get(x, YEAR), datum_get(x, MONTH), datum_get(x, DAY));}

typedef struct _datum {
    int day;
    int month;
    int year;
} datum;

typedef struct _tagebuch_eintrag {
    datum *date;
    char *text;
    char *verfasser;
    struct _tagebuch_eintrag *next;
} tagebuch_eintrag;

#endif
int datum_get(const datum *m, const int item) {
    switch (item) {
        case DAY:
            return m -> day;
        case MONTH:
            return m -> month;
        case YEAR:
            return m -> year;
        default:
            return -1;
    }
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

void tagebuch_eintrag_init(tagebuch_eintrag *m, datum *d, char *text, char *verfasser, tagebuch_eintrag *folgend) {
  m -> date = d;
  m -> text = text;
  m -> verfasser = verfasser;
  m -> next = folgend;
}

int main(void)
{
  datum *eins = malloc(sizeof(int));
  datum_init(eins, 25, 1, 2022);
  PRINT_DATE_ISO8601(eins);
  char *text1 = "Liebes Tagebuch!";
  char *verfasser1 = "Alexander";

  datum *zwei = malloc(sizeof(int));
  datum_init(zwei, 16, 2, 2022);
  PRINT_DATE_ISO8601(zwei);
  char *text2 = "wtf?";
  char *verfasser2 = "ML";

  tagebuch_eintrag *tag1 = malloc(sizeof(int));
  tagebuch_eintrag *tag2 = malloc(sizeof(int));
  tagebuch_eintrag_init(tag1, eins, text1, verfasser1, tag2);

  tagebuch_eintrag_init(tag2, zwei, text2, verfasser2, NULL);

  PRINT_DATE_ISO8601(tag1->date);
  printf("%s\n", tag1->text);
  printf("%s\n", tag1->verfasser);
  printf("================================\n");
  tagebuch_eintrag *test = tag1;
  test = tag1 -> next;
  PRINT_DATE_ISO8601(test->date);
  printf("%s\n", test->text);
  printf("%s\n", test->verfasser);


  free(eins);
  free(zwei);
  return 0;
}
