#include <stdio.h>

char* completo_incompleto(int true_false){
    return true_false ? "COMPLETO" : "INCOMPLETO";
}


int main(void){
    int num_segmentos, ligacoes;
    scanf("%d %d", &num_segmentos, &ligacoes);
    int matriz[num_segmentos][num_segmentos];

    for (int i = 0; i < num_segmentos; i++){
        for (int j = 0; j < num_segmentos; j++){
            matriz[i][j] = 0;
        }
    }
    
    int k = 0;
    
    while (k < ligacoes){
        int x, y;
        scanf("%d %d", &x, &y);
        matriz[x-1][y-1] = 1;
        matriz[y-1][x-1] = 1;
        k++;
    }
    
    for (int i = 0; i < num_segmentos; i++){
        int soma = 0;
        for (int j = 0; j < num_segmentos; j++){
            if (i > j) {
                soma += matriz[i][j];
                }
            }
            if (soma == 0 && i >= 1) {
                printf("%s\n", completo_incompleto(0));
                return 0;
            }
    }

    printf("%s\n", completo_incompleto(1));
    return 0;
}