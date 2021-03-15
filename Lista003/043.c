#include <stdio.h>

int main( void ) {
    double number;
    double sum = 0.0;
    int counter = 0;
    double averageAge = 0.0;

    do {
        printf("%s", "Digite um número: ");
        scanf("%lf", &number);

        if(number <= 0 ) {
            break;
        }
        sum += number;
        counter++;
    } while( 1 );
    
    averageAge = sum / counter;
    printf("%s%.2lf%s", "Média: ", averageAge, "\n");
    
    return 0;
}