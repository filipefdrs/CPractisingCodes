#include <stdio.h>

int main( void ) {
    int readNumber = 0;
    int counter = 1;
    int fat = 1;
    double e = 1.0;
    int flag = 0;

    printf("%s", "Insira um número: ");
    scanf("%d", &readNumber);
    
    while( counter <= readNumber ) {
        flag = 1;
        fat = 1;

        while( flag <= counter ) {
            fat *= flag;
            flag++;
        }

        e += (1.0) / (double)fat;
        counter++;
    }

    printf("%s%.2lf%s", "E: ", e, "\n");

    return 0;
}