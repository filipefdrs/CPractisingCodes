#include <stdio.h>

int main( void ) {
    double base, height;
    double area;

    printf("%s", "Digite a base e a altura, respectivamente: ");
    scanf("%lf%lf", &base, &height);

    if( base <= 0.0 || height <= 0.0 ) {
        printf("%s", "Entrada(s) inválida(s)");
    } else {
        area = (base * height) / 2;
        printf("%s%.2lf", "Área do triângulo: ", area);
    }
    
    printf("%s", "\n");

    return 0;
}