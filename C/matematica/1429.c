#include <stdio.h>
#include <string.h>

int fatorial(int num){
    int resultado = 1;
    for (int i = 1; i <= num; i++) {
        resultado *= i;
    }
    return resultado;
}

int main(void){
    char num[5];
    int conversao = 0;

    while (1) {
        int conversao = 0;
        scanf("%s", num);
        int TAM = strlen(num);

        if (strcmp(num, "0") == 0) {
            break;
        }
        for (int i = 0; i < TAM; i++) {
            int digito = num[i] - '0';
            conversao += digito*fatorial(TAM - i);
        }
        printf("%d\n", conversao);
    }
    return 0;
}