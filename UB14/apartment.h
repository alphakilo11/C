#ifndef APARTMENT_H_INCLUDED
   #define APARTMENT_H_INCLUDED
   #define CITY_NAME_SIZE 20
typedef struct _apartment { char city[CITY_NAME_SIZE]; int area;
double price;
} apartment;
int apartment_init(apartment *a, const char *city, int area, double price); int apartment_check_city(const char *city);
int apartment_check_area(int area);
int apartment_check_price(double price);
int apartment_set_city(apartment *a, const char *city); int apartment_set_area(apartment *a, int area);
int apartment_set_price(apartment *a, double price); char *apartment_get_city(const apartment *a);
int apartment_get_area(const apartment *a); double apartment_get_price(const apartment *a);
void apartment_print(const apartment *a);
double apartment_get_price_per_qm(const apartment *a);
#endif