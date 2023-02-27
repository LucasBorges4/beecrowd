#include <stdio.h>
int main(void){
    int vetor[10], x, i;
    scanf("%d", &x);
    for (i = 0; i < 10; i += 1) {
        if (i > 0) vetor[i] = vetor[i-1]*2;
        else vetor[i] = x;
        printf("N[%d] = %d\n", i, vetor[i]);
    }
    return 0;
}