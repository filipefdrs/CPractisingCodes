#include <stdio.h>

int main( void ) {
    int n, i, j;
    n = i = j = 0;
    int counter = 0;
    int number = 0;

    printf("%s", "Insira n, i e j respectivamente: ");
    scanf("%d%d%d", &n, &i, &j);

    while( counter != n ) {
        if( number % i == 0 || number % j == 0 ) {
            if(counter == 0 ) {
                printf("%d", number);
            } else {
                printf("%s%d", ", ", number);
            }
            counter++;
        }

        number++;
    }
    printf("%s", ".\n");

    return 0;
}