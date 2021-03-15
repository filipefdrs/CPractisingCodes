#include <stdio.h>

int main( void ) {
    int counter = 0;
    int readNumber = 0;
    int sum = 0;

    printf("%s", "Insira um número positivo: ");
    scanf("%d", &readNumber);
    
    for( counter = readNumber; counter >= 0; counter-- ) {
        sum += counter;
    }
    
    printf("%s%d%s", "A soma é: ", sum, "\n");

    return 0;
}