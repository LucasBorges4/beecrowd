#include <stdio.h>

int main() {
    int posor1, posor2, posor3, vetor[3];
    scanf("%d %d %d", &vetor[0], &vetor[1], &vetor[2]);
    
    posor1 = vetor[0];
    posor2 = vetor[1];
    posor3 = vetor[2];
    
    if (vetor[0] >= vetor[1]) {
        
        if (vetor[0]>= vetor[2]) {
            int temp = vetor[0];
            vetor[0] = vetor[2];
            vetor[2] = temp;
        }
        
        int temp = vetor[0];
        vetor[0] = vetor[1];
        vetor[1] = temp;
    }

    if (vetor[1]>= vetor[2]) {
            int temp = vetor[1];
            vetor[1] = vetor[2];
            vetor[2] = temp;
        }
    
    if (vetor[0] >= vetor[1]) {
        
        if (vetor[0]>= vetor[2]) {
            int temp = vetor[0];
            vetor[0] = vetor[2];
            vetor[2] = temp;
        }
        
        int temp = vetor[0];
        vetor[0] = vetor[1];
        vetor[1] = temp;
    }

    printf("%d\n%d\n%d\n\n", vetor[0], vetor[1], vetor[2]);
    printf("%d\n%d\n%d\n\n", posor1, posor2, posor3);

}