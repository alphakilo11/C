#include <stdio.h>

int main(void)
{
        double a_einkommen = 3669; //Jahreszwölftel
        double a_miete = 460;
        double a_strom = 35.83;
        double a_internet = 31.99;
        double a_GIS = 25.63;
        double a_spitzensteuersatz = 0.48;
        double a_wohnbudget = 1083.45 + 100 + 50; //1057.82 + Bausparer + Lebensversicherung

        double a_wohnkosten = a_miete + a_strom + a_internet + a_GIS;
        double a_wohnkosten_jo = a_wohnkosten * (1 - a_spitzensteuersatz);
        double a_wohnbudget_aux = a_wohnbudget - a_wohnkosten_jo;


        double k_einkommen = 2000; //Jahreszwölftel, Schätzung
        double k_miete = 604.42; //Schätzung
        double k_gas = 980.91/12; //Abrechnung 2020
        double k_strom = 546.77/12; //Abrechnung 2020
        double k_wohnbudget = k_miete + k_gas + k_strom;




        double wohnbudget_aux = a_wohnbudget_aux + k_wohnbudget;
        printf("Wohnbudget Alex: %.2f %.2f%%\n", a_wohnbudget, a_wohnbudget / a_einkommen * 100);
        printf("Wohnbudget Kathrin: %.2f %.2f%%\n", k_wohnbudget, k_wohnbudget / k_einkommen * 100);
        printf("Wohnkosten Sankt Johann: %.2f\n", a_wohnkosten_jo);
        printf("Wohnbudget AUX Alex: %.2f\n", a_wohnbudget_aux);
        printf("Wohnbudget AUX gesamt: %.2f\n", wohnbudget_aux);
        printf("Warmmiete max.: %.2f", wohnbudget_aux - k_strom);


        return 0;
}
