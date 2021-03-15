#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int op = 0;
    double number1, number2;
    number1 = number2 = 0;
    double result = 0;
    

    while( 1 ) {
        printf("%s", "====================Calculadora===================\n");
        printf("%s", "|Adição: 1                                       |\n");
        printf("%s", "|Subtração: 2                                    |\n");
        printf("%s", "|Multiplicação: 3                                |\n");
        printf("%s", "|Divisão: 4                                      |\n");
        printf("%s", "|Sair: 5                                         |\n");
        printf("%s", "==================================================\n");
        scanf("%d", &op);

        switch( op ) {
            case 1:
                printf("%s", "Digite os dois números, respectivamente: ");
                scanf("%lf%lf", &number1, &number2);
                result = number1 + number2;
                printf("%s%.2lf%s", "Soma: ", result, "\n");
                break;
            case 2:
                printf("%s", "Digite os dois números, respectivamente: ");
                scanf("%lf%lf", &number1, &number2);
                result = number1 - number2;
                printf("%s%.2lf%s", "Diferença: ", result, "\n");
                
                break;
            case 3:
                printf("%s", "Digite os dois números, respectivamente: ");
                scanf("%lf%lf", &number1, &number2);
                result = number1 * number2;
                printf("%s%.2lf%s", "Produto: ", result, "\n");
                
                break;
            case 4:
                printf("%s", "Digite os dois números, respectivamente: ");
                scanf("%lf%lf", &number1, &number2);

                if( number2 == 0 ) {
                    printf("%d", "Exceção. Divisão por zero é impossível.");
                } else {
                    result = number1 / number2;
                    printf("%s%.2lf%s", "Quociente: ", result, "\n");
                }
                
                break;
            case 5:
                printf("%s", "Tchau!!!\n");
                exit(1);
            
            default:
                printf("%s", "Operação inválida.\n");
        }
    }
    
    return 0;
}