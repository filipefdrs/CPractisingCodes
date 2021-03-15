#include <stdio.h>

int main( void ) {
    int readNumber = 0;
    int counter = 1;
    int sum = 0;

    printf("%s", "Insira um número: ");
    scanf("%d", &readNumber);

    printf("%s%d%s%s", "A soma dos divisores de ", readNumber, " é: ","\n");
    
    while( counter < readNumber ) {
        if( readNumber % counter == 0 ) {
            if( counter == 1 ) {
                printf("%d", counter);
            } else {
                printf(" + %d", counter);
            }
            sum += counter;
        }

        counter++;
    }
   
    printf("%s%d%s", " = ", sum, "\n");

    return 0;
}