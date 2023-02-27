#include <stdio.h>

int main() {
    int posor1, posor2, posor3, vetor[3];
    scanf("%d %d %d", &vetor[0], &vetor[1], &vetor[2]);
    
    posor1 = vetor[0];
    posor2 = vetor[1];
    posor3 = vetor[2];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (vetor[i] > vetor [j]) {
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }

    if (posor1 == vetor[1]) {
        printf("huguinho\n");
    }
    else if (posor2 == vetor[1]) {
        printf("zezinho\n");
    }
    else if (posor3 == vetor[1]) {
        printf("luisinho\n");
    }
}