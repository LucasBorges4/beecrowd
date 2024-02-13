#include <stdio.h>


int main(){
    int senha;
    while (scanf("%d", &senha)) {
        if (senha == 2002) {
            printf("Acesso Permitido\n");
            break;
        }
        printf("Senha Invalida\n");
    }
    return 0;
}