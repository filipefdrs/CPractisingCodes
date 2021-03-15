#include <stdio.h>

int main( void ) {
    int readNumber = 0;
    int n;
    n = 0;

    printf("%s", "Insira um número entre 100 e 999: ");
    scanf("%d", &readNumber);

    do {
        n = readNumber % 10;
        readNumber /= 10;

        printf("%d ", n);
    } while( readNumber != 0 );

    printf("%s", "\n");
    
    return 0;
}