#include <stdio.h>

int main( void ) {
    int sum = 0;
    int counter = 0;
    int readNumber = 0;

    while( counter < 10 ) {
        printf("%s%d%s", "Some o ", counter + 1, "º número: ");
        scanf("%d", &readNumber);
        if( readNumber >= 0 ) {
            sum += readNumber;
            counter++;
        }
    }

    printf("%s%.2lf%s", "A média é: ", ((double)sum) / counter, "\n");

    return 0;
}