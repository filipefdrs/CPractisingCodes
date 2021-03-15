#include <stdio.h>

int main( void ) {
    int counter = 0;
    int greater;
    int less;
    int readNumber = 0;

    while( counter < 10 ) {
        printf("%s%d%s", "Insira ", counter + 1, "º número: ");
        scanf("%d", &readNumber);

        if( counter == 0 ) {
            greater = less = readNumber;
        }
        if(readNumber > greater ) {
            greater = readNumber;
        } else if( readNumber < less ) {
            less = readNumber;
        }

        counter++;        
    }

    printf("%s%d%s%d%s", "O maior é: ", greater, "\nO menor é: ", less, "\n");

    return 0;
}