#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void){
    int matriz_quadrada_tam;

    while (1){
        scanf("%d", &matriz_quadrada_tam);
        if (matriz_quadrada_tam == 0) break;
        
        int matriz[matriz_quadrada_tam][matriz_quadrada_tam];

        for (int i = 0; i < matriz_quadrada_tam; i++) 
            for (int j = 0; j < matriz_quadrada_tam; j++) 
                matriz[i][j] = pow(2, i+j);
        
        // calcular o formato a ser usado para imprimir os números da matriz
        char num[20]; // tamanho suficiente para a maior string possível
        sprintf(num, "%d", matriz[matriz_quadrada_tam-1][matriz_quadrada_tam-1]);
        int formato = strlen(num);

        for (int i = 0; i < matriz_quadrada_tam; i++){
            for (int j = 0; j < matriz_quadrada_tam; j++) {
                if (j == 0) {
                    printf("%*d", formato, matriz[i][j]);
                } else {
                    printf(" %*d", formato, matriz[i][j]);
                }
            }
            printf("\n");
        }    
        
        printf("\n");
    }

    return 0;
}