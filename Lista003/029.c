#include <stdio.h>

int main( void ) {
    int readNumber = 0;
    int counter = 1;
    int fat = 1;
    double s = 0.0;
    int flag = 0;
    int tty = 2;

    printf("%s", "Insira um número: ");
    scanf("%d", &readNumber);
    
    while( counter <= readNumber ) {
        flag = 1;
        fat = 1;
        
        while( flag <= tty ) {
            fat *= flag;
            flag++;
        }

        s += counter / (double)fat;
        counter++;
        tty += 2;
    }

    printf("%s%.2lf%s", "S: ", s, "\n");

    return 0;
}