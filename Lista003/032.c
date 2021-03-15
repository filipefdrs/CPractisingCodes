#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( void ) {
    srand(time(NULL));
    int timesNumber;
    int d1, d2;
    d1 = d2 = 0;

    printf("%s", "Entre o número de vezes: ");
    scanf("%d", &timesNumber);

    for( int i = 0; i < timesNumber; i++ ) {
        d1 = 1 + rand() / ((RAND_MAX + 1u)/6);
        d2 = 1 + rand() / ((RAND_MAX + 1u)/6);

        if( d1 == d2 ) {
            printf("%s%d%s%d%s", "d1 ", d1, " = ", d2, " d2\n");
        } else if( d1 < d2 ) {
            printf("%s%d%s%d%s", "d1 ", d1, " < ", d2, " d2\n");
        } else {
            printf("%s%d%s%d%s", "d1 ", d1, " > ", d2, " d2\n");
        }
    }

    return 0;
}