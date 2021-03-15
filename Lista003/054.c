#include <stdio.h>

int main( void ) {
    unsigned int number;
    int counter = 0;

    printf("%s", "Insira um número maior que 1: ");
    scanf("%u", &number);

    for( int i = 1; i <= number; i++ ) {
        if( number % i == 0 ) {
            counter++;
        }
        
        if( number == 1 ) {
            counter++;
        }
    }

    if( counter == 2 ) {
        printf("%u%s", number, " é primo.\n");
    } else {
        printf("%u%s", number, " não é primo.\n");
    }

    return 0;
}