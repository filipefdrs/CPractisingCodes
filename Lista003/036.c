#include <stdio.h>

int main( void ) {
    int squareSum;
    int sumSquare;
    squareSum = sumSquare = 0;
    int difference = 0;

    for( int i = 1; i <= 10; i++ ) {
        squareSum += i * i;
        sumSquare += i;
    }
    sumSquare *= sumSquare;
    difference = sumSquare - squareSum;

    printf("%d%s%d%s%d%s", sumSquare, " - ", squareSum, " = ", difference, "\n");

    return 0;
}