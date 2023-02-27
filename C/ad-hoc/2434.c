#include <stdio.h>


int main(void){
    int dias, valor_deposito, valor_intermediario, valor_min;
    int i = 0;
    scanf("%d %d", &dias, &valor_deposito);
    valor_min = valor_deposito;
    while (i < dias) {
        scanf("%d", &valor_intermediario);
        valor_deposito += valor_intermediario;
        if (valor_deposito < valor_min) {
            valor_min = valor_deposito;
        }
        i++;
    }
    printf("%d\n", valor_min);
    return 0;
}