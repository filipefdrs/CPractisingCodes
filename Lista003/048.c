#include <stdio.h>

int main( void ) {
    int prev;
    int n;
    int number;
    int fibo = 1;
    number = 0;
    prev = 0;
    int sum = 0;

    for( int i = 0; sum <= 4000000 ; i++ ) {
        number = sum;
        if( fibo % 2 == 0 ) {
            sum += fibo;
        }
        
        n = fibo + prev;
        prev = fibo;
        fibo = n;
    
    }

    printf("%s%d%s", "A soma dos termos pares é: ", number, "\n");
    printf("%s", "\n");

    return 0;
}