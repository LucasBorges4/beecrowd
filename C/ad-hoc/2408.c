#include <stdio.h>

int main() {
    int vetor[3];
    scanf("%d %d %d", &vetor[0], &vetor[1], &vetor[2]);
        
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (vetor[i] > vetor [j]) {
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
    
    printf("%d\n", vetor[1]);
}