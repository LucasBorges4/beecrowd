#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int num_abas_inicial, num_acoes;
    char palavra[6];
    scanf("%d %d", &num_abas_inicial, &num_acoes);
    int i;
    for (i = 0; i < num_acoes; i++) {
        scanf("%s", palavra);
        if (strcmp(palavra, "fechou") == 0){
            num_abas_inicial++;
        }
        if (strcmp(palavra, "clicou") == 0){
            num_abas_inicial--;
        }
    }
    
    printf("%d\n", num_abas_inicial);

    return 0;
}