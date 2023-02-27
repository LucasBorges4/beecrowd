#include <stdio.h>

int main(void){

    int vetor[10], x, i;
    for (i = 0; i < 10; i += 1) {
        scanf("%d", &x);
        vetor[i] = x;
        if (vetor[i] <= 0) {
            vetor[i] = 1;
            }
        printf("X[%d] = %d\n", i, vetor[i]);
    }
    return 0;
}