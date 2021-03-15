#include <stdio.h>

int main( void ) {
    int nota100 = 0;
    int nota50 = 0;
    int nota20 = 0;
    int nota10 = 0;
    int nota5 = 0;
    int nota2 = 0;
    int nota1 = 0;
    int saque = 0;

    printf("%s", "Digite um valor para saque: ");
    scanf("%d", &saque);

    while( saque != 0 ) {
        nota100  = saque / 100;
        saque %= 100;
        nota50  = saque / 50;
        saque %= 50;
        nota20  = saque / 20;
        saque %= 20;
        nota10  = saque / 10;
        saque %= 10;
        nota5  = saque / 5;
        saque %= 5;
        nota2  = saque / 2;
        saque %= 2;
        nota1  = saque / 1;
        saque %= 1;
    }

    printf("%d%s", nota100, " nota(s) de 100  real(is)\n");
    printf("%d%s", nota50, " nota(s) de 50 real(is)\n");
    printf("%d%s", nota20, " nota(s) de 20 real(is)\n");
    printf("%d%s", nota10, " nota(s) de 10 real(is)\n");
    printf("%d%s", nota5, " nota(s) de 5 real(is)\n");
    printf("%d%s", nota2, " nota(s) de 2 real(is)\n");
    printf("%d%s", nota1, " nota(s) de 1 real(is)\n");
    
    return 0;
}