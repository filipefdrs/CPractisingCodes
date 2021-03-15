#include <stdio.h>

int main( void ) {
    int oddSum = 0;
    int a, b;
    a = b = 0;
    int counter = 0;

    printf("%s", "Digite o valor inicial e valor final: ");
    scanf("%d%d", &a, &b);

    if( a > b ) {
        printf("%s", "Intervalo de valores inválido");
    } else {
        counter = a;
        while( counter >= a && counter <= b ) {
            if( counter % 2 != 0 ) {
                oddSum += counter;
            }
            
            counter++;
        }
    }
    printf("%s%d%s", "Soma dos ímpares neste intervalo: ", oddSum, "\n");

    return 0;
}