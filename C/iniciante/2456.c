#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){ 
    int TAM = 5;
    
    intmax_t *vetor;
    vetor = (intmax_t*) malloc(TAM*sizeof(intmax_t));

    intmax_t num;
    for (int i = 0; i < TAM; i++) {
        scanf("%ld", &num);
        vetor[i] = num;
    }

    for (int i = 0; i < TAM; i++) {
        printf("%ld\n", vetor[i]);
    }

    free(vetor);
    return 0;
}