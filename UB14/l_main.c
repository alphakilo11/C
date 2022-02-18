#include <stdio.h> #include "apartment.h"
int main(void) { int i;
       house h;
       apartment a1, a2, a3, a4;
       apartment list[4];
if(!apartment_init(&a1, "Augsburg", 60, 512.00)
|| !apartment_init(&a2, "Augsburg", 75, 600.00)
|| !apartment_init(&a3, "Augsburg", 120, 1400.00) || !apartment_init(&a4, "Augsburg", 25, 300.00)) {
               printf("Fehler beim Anlegen eines Apartments.");
return 1; }
apartment_print(&a1);
printf("Preis pro Quadratmeter: %.2f Euro \n", apartment_get_price_per_qm(&a1)); printf("\n");
apartment_print(&a2);
printf("Preis pro Quadratmeter: %.2f Euro \n", apartment_get_price_per_qm(&a2)); printf("\n");
apartment_print(&a3);
printf("Preis pro Quadratmeter: %.2f Euro \n", apartment_get_price_per_qm(&a3)); printf("\n");
apartment_print(&a4);
printf("Preis pro Quadratmeter: %.2f Euro \n", apartment_get_price_per_qm(&a4));
printf("\n"); printf("\n");
list[0] = a1;
list[1] = a2;
list[2] = a3;
list[3] = a4;
house_set_landlord(&h, "Mayer");
house_set_apartments(&h, list, 4);
printf("Vermieter/in %s besitzt die folgenden Apartments:\n", h.landlord); for(i = 0; i < 4; i++) {
           apartment_print(h.apartments+i);
printf("\n"); }
       house_destroy(&h);
return 0; }