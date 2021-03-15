#include <stdio.h>

int main( void ) {
    int soma = 0.0;
    int somaPares = 0;
    double media = 0.0;
    int maior = 0.0;
    int menor = 0.0;
    double mediaPares = 0.0;
    int qtd = 0;
    int qtdPares = 0;
    int number = 0.0;

    while( 1 ) {
        scanf("%d", &number);
        soma += number;
        if( number == 0 ) {
            break;
        }
        qtd++;
        if( qtd == 1 ) {
            maior = menor = number;
        }
        if( number > maior ) {
            maior = number;
        } else if( number < menor ) {
            menor = number;
        }

        if( number % 2 == 0 ) {
            qtdPares++;
            somaPares += number;
        }
    }

    media = (double)soma / (double)qtd;
    mediaPares = (double)somaPares / (double)qtdPares;
    printf("%s%d%s", "Soma: ", soma, "\n");
    printf("%s%d%s", "Quantidade: ", qtd, "\n");
    printf("%s%.2lf%s", "Média: ", media, "\n");
    printf("%s%d%s", "Maior: ", maior, "\n");
    printf("%s%d%s", "Menor: ", menor, "\n");
    printf("%s%.2lf%s", "Média dos pares: ", mediaPares, "\n");

    return 0;
}