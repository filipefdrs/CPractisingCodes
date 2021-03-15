#include <stdio.h>

int main( void ) {
    int readNumber = 0;
    int counter = 0;

    printf("%s", "Insira um número: ");
    scanf("%d", &readNumber);
    
    counter = readNumber;
    while( 1 ) {
        if( counter % 11 == 0 || counter % 13 == 0 || counter % 17 == 0 ) {
            printf("%s%d", "Múltiplo: ", counter);
            break;
        }
        counter++;
    }

    printf("%s", "\n");

    return 0;
}