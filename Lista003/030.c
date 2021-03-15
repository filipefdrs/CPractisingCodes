#include <stdio.h>

int main( void ) {
    int readNumber = 0;
    int sum = 0, sum2 = 0, sumI = 0;


    printf("%s", "Insira um número: ");
    scanf("%d", &readNumber);

    for( int counter = 1; counter <= readNumber; counter++ ) {
        if( counter == 1 ) {
            printf("%d", counter);
        } else {
            printf(" + %d", counter);
        }
        sum += counter;
    }
    printf("%s%d%s", " = ", sum, "\n");


    for( int counter = 1; counter <= 2 * readNumber - 1; counter++ ) {

        if(counter % 2 != 0 ) {
            if( counter == 1 ) {
                printf("%d", counter);
            } else {
                printf(" + %d", counter);
            }
            sum2 += counter;
        } else {
            if( counter == 1 ) {
                printf("%d", counter);
            } else {
                printf(" - %d", counter);
            }
            sum2 -= counter;
        }
    }
    printf("%s%d%s", " = ", sum2, "\n");

    for( int counter = 1; counter <= 2 * readNumber - 1; counter++ ) {

        if(counter % 2 != 0 ) {
            if( counter == 1 ) {
                printf("%d", counter);
            } else {
                printf(" + %d", counter);
            }
            sumI += counter;
        }
    }
    printf("%s%d%s", " = ", sumI, "\n");

    return 0;
}