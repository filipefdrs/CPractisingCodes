#include <stdio.h>

int main( void ) {
    int counter = 0;
    int par = 0;
    int sentinel = 0;

    while( 1 ) {
        if( par % 2 == 0 ) {    
            counter += par;
            sentinel++;

            if( sentinel == 50 ) {
                break;
            }        
        }

        par++;
    }
    
    printf("%s%d%s","A soma é: ", counter, "\n");

    return 0;
}