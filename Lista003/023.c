#include <stdio.h>

int main( void ) {
    int readNumber = 0;
    int counter = 1;

    printf("%s", "Insira um número: ");
    scanf("%d", &readNumber);
    
    while( counter <= readNumber ) {
        if( readNumber % counter == 0 ) {
            printf("%d ", counter);
        }

        counter++;
    }
   
    printf("%s", "\n");
    
    return 0;
}