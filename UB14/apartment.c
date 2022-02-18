#include <string.h> #include <stdlib.h> #include <ctype.h> #include <stdio.h> #include "apartment.h"
int apartment_init(apartment *a, const char *city, int area, double price) { if(!apartment_set_city(a, city) ||
!apartment_set_area(a, area) ||
!apartment_set_price(a, price))
return 0; return 1;
}
int apartment_check_city(const char *city) { int i;
int len = strlen(city); if(len >= CITY_NAME_SIZE)
return 0;
for(i = 0; i < len; i++) {
if(!isalpha(city[i]) && city[i] != ' ') return 0;
}
return 1; }
int apartment_check_area(int area) { return area > 0;
}
int apartment_check_price(double price) { return price > 0;
}
int apartment_set_city(apartment *a, const char *city) { if(!apartment_check_city(city))
return 0;
strcpy(a -> city, city); return 1;
}
int apartment_set_area(apartment *a, int area) { if(!apartment_check_area(area))
return 0;
a -> area = area; return 1;
}
int apartment_set_price(apartment *a, double price) { if(!apartment_check_price(price))
return 0;
a -> price = price; return 1;

}
char *apartment_get_city(const apartment *a) { return (char *) a -> city;
}
int apartment_get_area(const apartment *a) { return a -> area;
}
double apartment_get_price(const apartment *a) { return a -> price;
}
void apartment_print(const apartment *a) {
printf("Mietwohnung in %s: \n", apartment_get_city(a)); printf("Groesse: %i Quadratmeter \n", apartment_get_area(a)); printf("Preis: %.2f Euro \n", apartment_get_price(a));
}
double apartment_get_price_per_qm(const apartment *a) { double price = a -> price;
double qm = (double) a -> area;
return price / qm;
}

typedef struct _house { char *landlord;
       apartment *apartments;
   } house;
int house_set_landlord(house *h, const char *landlord);
int house_set_apartments(house *h, const apartment *apartments, int n); void house_destroy(house *h);
int house_set_landlord(house *h, const char *landlord) { char *l;
l = malloc((strlen(landlord) + 1) * sizeof(char)); if(l == NULL)
return 0;
h -> landlord = l;
strcpy(h -> landlord, landlord); return 1;
}
int house_set_apartments(house *h, const apartment *apartments, int n) { int i;
apartment *a;
a = malloc(n * sizeof(apartment)); if(a == NULL)
return 0;
h -> apartments = a; for(i = 0; i < n; i++) {
           h -> apartments[i] = apartments[i];
       }
return 1; }
void house_destroy(house *h){ free(h -> landlord);
h -> landlord = NULL; free(h -> apartments);
       h -> apartments = NULL;
   }