#include <stdio.h>


int main(){
    int valor;
    scanf("%d", &valor);
    int vetor[valor];
    //cria vetor
    for (int i = 0; i <= valor; i++){
        vetor[i] = 0;
    }
    //atribui a soma
    for (int i = 0; i < valor-1; i++){
        int valor2 = 0;
        scanf("%d", &valor2);
        vetor[valor2]++;
    }
    //retorna o valor

    for (int j = 1; j <= valor; j++){
        if (vetor[j]==0)printf("%d\n", j);
    }
    return 0;
}