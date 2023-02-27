#include "stdio.h"

int leitor_vetor(int vetor[], int num_termos){
    int *pVetor = vetor;
    int numeros = 1;
    for (int i = 1; i < num_termos; i++){
        if (*(pVetor+i-1) == *(pVetor+i));
        else numeros++;
    }
    return numeros;
}

int sequencia_secreta(int num_termos_sequencia){
    int vetor[num_termos_sequencia];
    for (int i = 0; i < num_termos_sequencia; ++i) {
        scanf("%d", &vetor[i]);
    }
    return leitor_vetor(vetor, num_termos_sequencia);
}

int main(void){
    int num_termos;
    scanf("%d", &num_termos);
    printf("%d\n", sequencia_secreta(num_termos));

    return 0;
}