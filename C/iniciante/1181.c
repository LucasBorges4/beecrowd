#include <stdio.h>
#include <string.h>

int main(void){
    int linha;
    char entrada;
    float soma = 0, media;
    float matriz[12][12];

    scanf("%d", &linha);
    scanf(" %c", &entrada); // A CARNIÇA DO CHAR PRECISA DESSE ESPAÇO PARA LER 1 CARACTERE. :D que beleza... 
    
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            scanf("%f", &matriz[i][j]);

    for (int k = 0; k < 12; k++)
        soma += matriz[linha][k];
    
    if (entrada == 'S') {
        printf("%.1f\n", soma);
    } else if (entrada == 'M') {
        media = soma/12;
        printf("%.1f\n", media);
    }

    return 0;
}