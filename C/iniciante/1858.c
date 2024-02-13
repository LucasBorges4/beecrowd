#include <stdio.h>

int main(void) {
    int numero_de_algozes, vetor[100];
    scanf("%d", &numero_de_algozes);
    //Declaração de variavel para "for"
    int i, j;
    for(i = 0; i < numero_de_algozes; i++){
        scanf("%d", &vetor[i]);
    }

    int menor_posicao = 0;
    int menor_valor = vetor[0];
    for (j = 1; j < numero_de_algozes; j++){
        if(menor_valor > vetor[j]){
            menor_valor = vetor[j];
            menor_posicao = j;
        }
    }
    printf("%d\n", menor_posicao+1);
    return 0;
}