#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( void ) {
    srand(time(NULL));
    int randomVariable = 1 + rand() / ((RAND_MAX + 1u) / 1000);
    int attempts = 0;
    int number = 0;
    

    while( 1 ) {
        printf("%s%d%s", "Tentativa ", ++attempts, ": " );
        scanf("%d", &number);

        if( number == randomVariable ) {
            printf("%s", "Acetou!!!\n");
            break;
        } else if( number < randomVariable ) {
            printf("%s", "Chute menor que o esperado.\n");
        } else {
            printf("%s", "Chute maior que o esperado.\n");
        }
    }

    printf("%s%d%s%d%s", "O número ", randomVariable, " foi descoberto em ", attempts, " tentativas.\n");
    
    return 0;
}