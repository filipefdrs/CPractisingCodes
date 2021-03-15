#include <stdio.h>

int main( void ) {
    unsigned int habNumber = 0;
    double kwhValue = 0.0;
    double qtdKwh = 0.0;
    int qtdResid = 0;
    int qtdComer = 0;
    int qtdIndus = 0;
    double maior = 0.0;
    double menor = 0.0;
    double media = 0.0;
    unsigned int sentinel = 1;
    double consumo = 0.0;
    int codigo = 0;
    int totalResid = 0;
    int totalComer = 0;
    int totalIndus = 0;

    printf("%s", "Digie o número de habitantes: ");
    scanf("%u", &habNumber);
    printf("%s", "Digie o valor do kwh: ");
    scanf("%lf", &kwhValue);

    while( sentinel <= habNumber ) {
        printf("%s", "Digite o consumo do mês: ");
        scanf("%lf", &consumo);
        qtdKwh += consumo * kwhValue;

        if( sentinel == 1 ) {
            maior = menor = consumo;
        } else {
            if( consumo > maior ) {
                maior = consumo;
            } else if( consumo < menor ) {
                menor = consumo;
            }
        }

        printf("%s", "Digite  código do consumidor: ");
        scanf("%d", &codigo);
        if( codigo == 1 ) {
            qtdResid++;
            totalResid += consumo;
        } else if( codigo == 2 ) {
            qtdComer++;
            totalComer += consumo;
        } else if( codigo == 3 ) {
            qtdIndus++;
            totalIndus += consumo;
        }

        sentinel++;
    }
    media = qtdKwh / (double)sentinel;
    printf("%s%.2lf%s", "Maior: ", maior, "\n");
    printf("%s%.2lf%s", "Menor: ", menor, "\n");
    printf("%s%.2lf%s", "Média: ", media, "\n");
    printf("%s%d%s", "Total - Residencial: ", qtdResid, "\n");
    printf("%s%d%s", "Total - Comercial: ", qtdComer, "\n");
    printf("%s%d%s", "Total - Industrial: ", qtdIndus, "\n");

    return 0;
}