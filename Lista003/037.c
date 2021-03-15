#include <stdio.h>

int main( void ) {
    int readNumber = 0;
    int n;
    n = 0;
    int reference = 1000;
    int testNumber = 0;

    do {
        readNumber = reference;
        n = readNumber % 100;
        readNumber /= 100;
        testNumber = ((n + readNumber) * (n + readNumber));

        if( testNumber == reference ) {
            printf("%d ", testNumber);
        }
        reference++;
    } while( reference <= 9999 );

    printf("%s", "\n");
    
    return 0;
}