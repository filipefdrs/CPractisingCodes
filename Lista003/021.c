#include <stdio.h>

int main( void ) {
    int number1, number2;
    number1 = number2 = 0;
    int sum, prod;
    sum = 0;
    prod = 1;

    printf("%s", "Insira um intervalo [a, b]: ");
    scanf("%d%d", &number1, &number2);

    for(int counter = number1; counter >= number1 && counter <= number2; counter++ ) {
        if( counter % 2 == 0 ) {
            sum += counter;
        } else if( counter % 2 != 0 ) {
            prod *= counter;
        }
    }

    printf("%s%d%s%d%s", "Soma dos pares: ", sum, "\nProduto dos ímpares: ", prod, "\n");

    return 0;
}