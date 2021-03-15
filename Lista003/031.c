#include <stdio.h>

int main( void ) {
    double s = 0.0;
    int impar = 1;

    for( int counter = 1; counter <= 50; counter++, impar += 2 ) {
        s += (double)impar / (double)counter;
    }

    printf("%s%.2lf%s", "S = ", s, "\n");

    return 0;
}