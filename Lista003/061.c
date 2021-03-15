#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define T_MIN 10
#define T_MAX 99

int main( void ) {
    int number1;
    int number2;
    int product;
    int iNumber;
    int temporary;
    int digitQtd;
    int greatestPalindrom;
    int greatestFactor1;
    int greatestFactor2;
    int cypher;
    cypher = number1 = number2 = iNumber = product = temporary = digitQtd = greatestPalindrom = greatestFactor1 = greatestFactor2 = 0;


    for( number1 = T_MAX; number1 >= T_MIN; number1-- ) {
        for( number2 = number1; number2 >= T_MIN; number2-- ) {
            product = number1 * number2;

            if (product > greatestPalindrom) {
                temporary = product;
                while (temporary != 0) {
                    digitQtd++;
                    temporary /= 10;
                }

                temporary = product;
                iNumber = 0;
                while(temporary != 0) {
                    cypher = temporary % 10;
                    iNumber += cypher * pow(10, digitQtd - 1);
                    temporary /= 10;
                    digitQtd--;
                }

                if (product == iNumber) {
                    greatestPalindrom = iNumber;
                    greatestFactor1 = number1;
                    greatestFactor2 = number2;
                }
            }
        }
    }

    printf("%d%s%d%s%d%s", greatestPalindrom, " = ", greatestFactor1, " * ", greatestFactor2, "\n");

    return 0;
}