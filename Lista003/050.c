#include <stdio.h>

int main( void ) {
    double alturaChico = 1.50;
    double alturaZe = 1.10;
    const double taxaCresChico = 0.02;
    const double taxaCresZe = 0.03;
    double totalChico = 0.0;
    double totalZe = 0.0;
    int meses = 0;
    totalChico = alturaChico;
    totalZe = alturaZe;

    do {
        totalChico += taxaCresChico;
        totalZe += taxaCresZe;
        meses++;
    } while( totalZe <= totalChico );

    printf("%s%d%s", "O total de mês(es) pra a altura de Zé ultrapassar a de Chico foi: ", meses, "\n");

    return 0;
}