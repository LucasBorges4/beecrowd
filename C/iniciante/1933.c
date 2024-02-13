#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int carta1, carta2;
    int maior;
    scanf("%d", &carta1);
    scanf("%d", &carta2);
    maior = carta1;
    if (carta1 < carta2){
        maior = carta2;
    }
    printf("%d\n", maior);
    return 0;
}