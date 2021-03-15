#include <stdio.h>

int main( void ) {
    const unsigned int number = 2000000;
    int counter = 0;
    unsigned int soma = 0;

    for( int i = 1; i < number; i++ ) {
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
    
    printf("%s%u%s%u%s", "A soma de todos os primos abaixo de ", number, " é: ", soma, "\n");
    
    return 0;
}