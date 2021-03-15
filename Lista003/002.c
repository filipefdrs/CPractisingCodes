#include <stdio.h>

int main( void ) {
    int counter;

    for( counter = 1; counter <= 100; counter++ ) {
        printf("%d ", counter);
    }
    printf("%s", "\n");

    counter = 1;
    while( counter <= 100 ) {
        printf("%d ", counter);
        counter++;
    }
    printf("%s", "\n");

    counter = 1;
    do{
        printf("%d ", counter);
        counter++;
    } while( counter <= 100);
    printf("%s", "\n");
    
    return 0;
}