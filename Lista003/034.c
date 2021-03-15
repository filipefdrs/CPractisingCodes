#include <stdio.h>

int main( void ) {
    int minorNumber = 0;
    int counter = 0;

    for( int i = 1; 1; i++ ) {
        for( int j = 1; j <= 20; j++ ) {
            if( i % j == 0 ) {
                counter++;
            } else {
                counter = 0;
                break;
            }
        }

        if( counter == 20 ) {
            printf("%s%d", "O menor número que pode ser dividido por cada um dos números de 1 a 20 é: ", i);
            break;
        }
    }
    printf("%s", "\n");

    return 0;
}