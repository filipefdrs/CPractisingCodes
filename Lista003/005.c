#include <stdio.h>

int main( void ) {
    int sum = 0;
    int counter = 0;
    int readNumber = 0;

    while( counter < 10 ) {
        printf("%s%d%s", "Some o ", counter + 1, "º número: ");
        scanf("%d", &readNumber);
        sum += readNumber;
        counter++;
    }

    printf("%s%d%s", "A soma é: ", sum, "\n");

    return 0;
}