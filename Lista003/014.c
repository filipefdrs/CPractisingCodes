#include <stdio.h>

int main( void ) {
    int counter = 0;
    int readNumber = 0;

    printf("%s", "Insira um número positivo: ");
    scanf("%d", &readNumber);
    
    for( counter = readNumber; counter >= 0; counter-- ) {
        if(counter % 2 == 0 ) {
            printf("%d ", counter);
        }
    }
    
    printf("%s", "\n");

    return 0;
}