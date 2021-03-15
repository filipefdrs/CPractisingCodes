#include <stdio.h>
#include <math.h>

int main( void ) {
    double number;

    do {
        printf("%s", "Digite um número: ");
        scanf("%lf", &number);

        if(number <= 0 ) {
            break;
        }

        printf("%s%.2lf%s", "Quadrado: ", pow(number, 2), "\n");
        printf("%s%.2lf%s", "Cubo: ", pow(number, 3), "\n");
        printf("%s%.2lf%s", "Raiz quadrada: ", sqrt(number), "\n");
    } while( 1 );

    printf("%s", "\n");
    
    return 0;
}