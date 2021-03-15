#include <stdio.h>

int main( void ) {
    unsigned int number;
    int counter = 0;
    int soma = 0;

    printf("%s", "Insira um número maior que 1: ");
    scanf("%u", &number);

    for( int i = 1; i <= number; i++ ) {
        for(int j = 1; j <= i; j++ ) {
            if( i % j == 0 ) {
                counter++;
            }

            if( i == 1 ) {
                counter++;
            }
        }

        if( counter == 2 ) {
            soma += i;
        }
        counter = 0;
    }
    
    printf("%s%d%s", "A soma dos primeiros primos é: ", soma, "\n");
    
    return 0;
}