#include <stdio.h>

int main( void ) {
    int counter = 1000;

    while( counter <= 100000 ) {
        printf("%d ", counter);
        counter += 1000;
    }    
    printf("%s", "\n");
    
    return 0;
}