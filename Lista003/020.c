#include <stdio.h>

int main( void ) {
    int readNumber = 0;
    int n;
    n = 0;
    int qtdRead, qtdTotal;
    qtdRead = qtdTotal = 0;

    while( readNumber != 1000 ) {
        printf("%s", "Insira um número: ");
        scanf("%d", &readNumber);

        if(readNumber % 2 == 0 ) {
            qtdRead++;
        }
        
        qtdTotal++;
    }
    qtdRead--;

    printf("%s%d%s%d%s", "Quantidade de Pares: ", qtdRead, "\nQuantidade Total: ", qtdTotal, "\n");
    
    return 0;
}