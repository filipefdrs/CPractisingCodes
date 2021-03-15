#include <stdio.h>

int main( void ) {
    unsigned int a, b;
    int counter = 0;
    int qtdPrimos = 0;

    printf("%s", "Digite um intervalo positivo, tal que, [a, b]: ");
    scanf("%u%u", &a, &b);

    for( int i = a; i < b; i++ ) {
        for(int j = 1; j <= i; j++ ) {
            if( i % j == 0 ) {
                counter++;
            }

            if( i == 1 ) {
                counter++;
            }
        }

        if( counter == 2 ) {
            qtdPrimos++;
        }
        counter = 0;
    }
    
    printf("%s%d%s%u%s%u%s", "Há ", qtdPrimos, " primo(s) no intervalo [", a, ", ", b, "].\n");
    
    return 0;
}