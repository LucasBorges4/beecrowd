#include <stdio.h>
#include <string.h>

int main(void){

    char entrada;
    double soma = 0, media;
    double matriz[12][12];
    int qtd_num_sum = 0;
    scanf(" %c", &entrada); // A CARNIÇA DO CHAR PRECISA DESSE ESPAÇO PARA LER 1 CARACTERE. :D que beleza... 
    
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            scanf("%lf", &matriz[i][j]);

    for (int k = 0; k < 12; k++){
        for (int l = 0; l < 12; l++) {
            if (k < l && k + l <= 10) {                //local da leitura
                soma += matriz[k][l];
                qtd_num_sum++;
            }
        }
    }
    
    if (entrada == 'S') {
        printf("%.1lf\n", soma);
    } else if (entrada == 'M') {
        media = soma/qtd_num_sum;
        printf("%.1lf\n", media);
    }

    return 0;
}