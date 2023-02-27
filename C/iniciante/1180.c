#include <stdio.h>
 
int main(void) {
    int test;
    scanf("%d", &test);
    
    int num;
    scanf("%d", &num);
    
    int menor, posicao;
    menor = num;
    posicao = 0;
    
    int i = 1;
    while (i < test-1) {
        scanf("%d", &num);
        if (menor > num) {
            menor = num;
            posicao = i;
        }
        i++;
    }

    printf("Menor valor: %d\nPosicao: %d\n",menor, posicao);
   
 
    return 0;
}