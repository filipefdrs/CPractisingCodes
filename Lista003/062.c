#include <stdio.h>
#include <string.h>
#define T_MAX 37 //caso de laço

int main( void ) {
    const char *ate9 = "umdoistresquatrocincoseisseteoitonove";
    const char *ate19 = "dezonzedozetrezequatorzequinzedezesseisdezesstedezoitedezenove";
    
    const char *casa20 = "vinte";
    const char *casa30 = "trinta";
    const char *casa40 = "quarenta";
    const char *casa50 = "cinquenta";
    const char *casa60 = "sessenta";
    const char *casa70 = "setenta";
    const char *casa80 = "oitenta";
    const char *casa90 = "noventa";
    
    const char *casa20m = "vintee";
    const char *casa30m = "trintae";
    const char *casa40m = "quarentae";
    const char *casa50m = "cinquentae";
    const char *casa60m = "sessentae";
    const char *casa70m = "setentae";
    const char *casa80m = "oitentae";
    const char *casa90m = "noventae";

    const char *casa100 = "cem";
    const char *casa200 = "duzentos";
    const char *casa300 = "trezentos";
    const char *casa400 = "quatrocentos";
    const char *casa500 = "quinhentos";
    const char *casa600 = "seicentos";
    const char *casa700 = "setecentos";
    const char *casa800 = "oitocentos";
    const char *casa900 = "novecentos";
    const char *casa1000 = "mil";

    const char *casa100m = "centoe";
    const char *casa200m = "duzentose";
    const char *casa300m = "trezentose";
    const char *casa400m = "quatrocentose";
    const char *casa500m = "quinhentose";
    const char *casa600m = "seicentose";
    const char *casa700m = "setecentose";
    const char *casa800m = "oitocentose";
    const char *casa900m = "novecentose";

    int total_ate9 = strlen(ate9);
    int total_ate19 = strlen(ate19);
    int total2090 = strlen(casa20) + strlen(casa30) + strlen(casa40) + strlen(casa50) + strlen(casa60) + strlen(casa70) + strlen(casa80) + strlen(casa90);
    int total20 = strlen(casa20m) * 9 + total_ate9;
    int total30 = strlen(casa30m) * 9 + total_ate9;
    int total40 = strlen(casa40m) * 9 + total_ate9;
    int total50 = strlen(casa50m) * 9 + total_ate9;
    int total60 = strlen(casa60m) * 9 + total_ate9;
    int total70 = strlen(casa70m) * 9 + total_ate9;
    int total80 = strlen(casa80m) * 9 + total_ate9;
    int total90 = strlen(casa90m) * 9 + total_ate9;
    int total2090m = total20 + total30 + total40 + total50 + total60 + total70 + total80 + total90;
    int total100 = strlen(casa100m) * 9 + total2090m + total_ate19 + total_ate9;
    int total200 = strlen(casa200m) * 9 + total2090m + total_ate19 + total_ate9;
    int total300 = strlen(casa300m) * 9 + total2090m + total_ate19 + total_ate9;
    int total400 = strlen(casa400m) * 9 + total2090m + total_ate19 + total_ate9;
    int total500 = strlen(casa500m) * 9 + total2090m + total_ate19 + total_ate9;
    int total600 = strlen(casa600m) * 9 + total2090m + total_ate19 + total_ate9;
    int total700 = strlen(casa700m) * 9 + total2090m + total_ate19 + total_ate9;
    int total800 = strlen(casa800m) * 9 + total2090m + total_ate19 + total_ate9;
    int total900 = strlen(casa900m) * 9 + total2090m + total_ate19 + total_ate9;
    int total1001000 = strlen(casa100) + strlen(casa200) + strlen(casa300) + strlen(casa400) + strlen(casa500) + strlen(casa600) + strlen(casa700) + strlen(casa800) + strlen(casa900) + strlen(casa1000);
    int total100900m = total100 + total200 + total300 + total400 + total500 + total600 + total700 + total800 + total900;

    int total = total2090 + total2090m + total1001000 + total100900m;

    printf("%s%d%s", "Serão necessárias ", total, " letras\n");
    return 0;
}