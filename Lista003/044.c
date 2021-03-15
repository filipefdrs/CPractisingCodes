#include <stdio.h>

int main( void ) {
    int prev;
    int n;
    int number;
    int fibo = 1;
    number = 0;
    prev = 0;

    printf("%s", "Digite um número positivo: ");
    scanf("%d", &number);

    for( int i = 0; ; i++ ) {
        if( i == 0 ) {
            printf("%d ", i);
        }

        printf("%d ", fibo);
        
        if( fibo > number ) {
            break;
        }
        
        n = fibo + prev;
        prev = fibo;
        fibo = n;
    
    }
    printf("%s", "\n");

    return 0;
}