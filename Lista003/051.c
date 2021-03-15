#include <stdio.h>

int main( void ) {
    double salarioInicial = 2000.00;
    double taxaAumentoInicial = 0.015;
    double anoAnterior = (salarioInicial * taxaAumentoInicial);
    double salarioAtual = 0.0;

    for( int ano = 1997; ano <= 2021; ano++ ) {
        anoAnterior += (2 * (salarioInicial * taxaAumentoInicial));
    }
    salarioAtual = anoAnterior + salarioInicial;

    printf("%s%.2lf%s", "Salário atual: ", salarioAtual, "\n");

    return 0;
}