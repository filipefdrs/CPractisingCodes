#include <stdio.h>

int main( void ) {
    double carlosSalary = 0.0;
    double joaoSalary = 0.0;
    const double cardPoup = 0.02;
    const double rendFixa = 0.05;
    int months = 0;
    double amountCarlos = 0.0;
    double amountJoao = 0.0;

    printf("%s", "Digite o salário do Carlos: ");
    scanf("%lf", &carlosSalary);
    joaoSalary = carlosSalary / 3.0;

    do {
        amountCarlos += ((amountCarlos + carlosSalary) * cardPoup) + carlosSalary;
        amountJoao += ((amountJoao + joaoSalary) * rendFixa) + joaoSalary;
        months++;
    } while( amountJoao <= amountCarlos );

    printf("%s%d%s", "Levou ", months, " mês(es) para a aplicação de João ultrapassar a de Carlos.\n");

    return 0;
}