#include <stdio.h>

int main(void){
    float codigo[5] = {
        4, 4.5, 5, 2, 1.5
    };

    int qtd, callcode;
    scanf("%d %d", &callcode, &qtd);
    float pagar;
    pagar = qtd;
    pagar *= codigo[callcode-1];
    printf("Total: R$ %.2f\n", pagar);

    return 0;
}