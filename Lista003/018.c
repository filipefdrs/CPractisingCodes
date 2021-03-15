#include <stdio.h>

int main( void ) {
    int counter = 0;
    int greater;
    int less;
    int readNumber = 0;
    int qtdIterations = 0;
    int qtdGreater = 0;

    printf("%s", "Insira uma quantidade: ");
    scanf("%d", &qtdIterations);

    while( counter < qtdIterations ) {
        printf("%s%d%s", "Insira ", counter + 1, "º número: ");
        scanf("%d", &readNumber);

        if( counter == 0 ) {
            greater = readNumber;
            qtdGreater++;
        }
        if(readNumber > greater ) {
            greater = readNumber;
            qtdGreater = 0;
            qtdGreater++;
        } else if( readNumber == greater ) {
            qtdGreater++;
        }

        counter++;        
    }

    printf("%s%d%s%d%s", "O maior é: ", greater, "\nO número de leituras foi: ", qtdGreater, "\n");

    return 0;
}