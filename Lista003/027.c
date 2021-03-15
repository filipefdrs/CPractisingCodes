#include <stdio.h>

int main( void ) {
    int readNumber = 0;
    int counter = 1;
    double harmonicNumber = 0.0;

    printf("%s", "Insira um número: ");
    scanf("%d", &readNumber);
    
    while( counter <= readNumber ) {
        harmonicNumber += (1.0) / (double)counter;
        counter++;
    }

    printf("%s%.2lf%s", "Número harmônico: ", harmonicNumber, "\n");

    return 0;
}