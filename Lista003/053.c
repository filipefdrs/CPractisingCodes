#include <stdio.h>

int main( void ) {
    unsigned int lineNumber = 0;
    int state = 0;

    printf("%s", "Digite um número positivo maior que zero: ");
    scanf("%u", &lineNumber);

    for( int i = 1; i <= lineNumber; i++ ) {
        for(int j = 1; j <= i; j++ ) {
            printf("%d ", ++state);
        }

        printf("%s", "\n");
    }

    return 0;
}