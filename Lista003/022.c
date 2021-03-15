#include <stdio.h>

int main( void ) {
    double media = 0;
    int qtdNotas = 0;
    double readNumber = 0;

    while( 1 ) {
        printf("%s", "Insira uma nota: ");
        scanf("%lf", &readNumber);

        if( readNumber >= 10 && readNumber <= 20 ) {
            media += readNumber;
            qtdNotas++;
        } else {
            break;
        }
    }
    media = media / qtdNotas;
   
    printf("%s%.2lf%s", "Média: ", media, "\n");
    
    return 0;
}