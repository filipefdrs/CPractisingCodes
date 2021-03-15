#include <stdio.h>

int main( void ) {
    int counter = 0;
    int readNumber = 0;

    printf("%s", "Insira um número positivo: ");
    scanf("%d", &readNumber);
    
    while( counter <= readNumber ) {
        if( counter % 2 != 0 ) {
            printf("%d ", counter);    
        }

        counter++;
    }
    
    printf("%s", "\n");

    return 0;
}