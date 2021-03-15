#include <stdio.h>

int main( void ) {
    int counter = 10;

    while( counter >= 0 ) {
        printf("%d ", counter);
        counter--;
    }
    printf("%s", "\nFIM!");

    return 0;
}