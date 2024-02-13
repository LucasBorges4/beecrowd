#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int gramas, limitador, g_necessarios = 1000;
    float bits, valor, menor;
    //maria precisa de 1000 gramas

    scanf("%d", &limitador);
    scanf("%f", &bits);
    scanf("%d", &gramas);

    valor = bits/gramas;
    int i = 0;
    menor = valor;

    while (i < limitador - 1) {
        scanf("%f", &bits);
        scanf("%d", &gramas);
        valor = bits/gramas;
        if (valor <= menor) {
            menor = 0;
            menor += valor;
        }
        i++;
    }

    printf("%.2f\n", menor*g_necessarios);
    return 0;
}