#include <stdio.h>

int main(void){
    int T, vetor[1000];
    scanf("%d", &T);
    for (int i = 0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, i%T);
    }
    return 0;
}