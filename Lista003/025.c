#include <stdio.h>

int main( void ) {
    int counter;
    int sum;
    sum = counter = 0;

    while( counter < 1000 ) {
        if( counter % 3 == 0 || counter % 5 == 0 ) {
            sum += counter;
        }

        counter++;
    }

    printf("%s%d%s", "A soma é: ", sum, "\n");

    return 0;
}