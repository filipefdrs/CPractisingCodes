#include <stdio.h>

int main( void ) {
    int op = 0;
    double speed = 0;
    double speedConv = 0;
    

    while( 1 ) {
        printf("%s", "====================Conversão====================\n");
        printf("%s", "|Ler Km/h --> m/s: 1                            |\n");
        printf("%s", "|Ler m/s --> km/h: 2                            |\n");
        printf("%s", "|Sair: 3                                        |\n");
        printf("%s", "=================================================\n");
        scanf("%d", &op);

        if( op == 1 ) {
            printf("%s", "Digite a velocidade em km/h: ");
            scanf("%lf", &speed);
            speedConv = speed / (3.6);
            printf("%s%.2lf%s", "Velocidade: ", speedConv, " m/s\n\n");
        } else if( op == 2 ) {
            printf("%s", "Digite a velocidade em m/s: ");
            scanf("%lf", &speed);
            speedConv = speed * (3.6);
            printf("%s%.2lf%s", "Velocidade: ", speedConv, " km/h\n\n");
        } else if( op == 3 ) {
            printf("%s", "Tchau!!!\n");
            break;
        } else {
            printf("%s", "Tente novamente.\n");
        }
    }
    
    return 0;
}