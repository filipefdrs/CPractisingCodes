#include <stdio.h>
#define MAX_TERM 1000
#define MIN_TERM 1
#include <math.h>

int main( void ) {
    for( int c = MIN_TERM + 2; c <= MAX_TERM; c++ ) {
        for( int b = MIN_TERM + 1; b < c; b++ ) {
            for( int a = MIN_TERM; a < b; a++ ) {
                if( pow(a, 2) + pow(b, 2) == pow(c, 2) ) {
                   //printf("%s%d%s%d%s%d%s", "(", a, ", ", b, ", ", c, ")\n");
                   if( a + b + c == 1000 ) {
                       printf("%s%d%s%d%s%d%s", "(", a, ", ", b, ", ", c, ")\n");
                   }
                }
            }
        }
    }

    return 0;
}