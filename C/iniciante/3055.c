#include <stdio.h>

int main(void){
    int prova1, media;
    scanf("%d %d", &prova1, &media);
    int prova2;
    prova2 = 2*media - prova1;
    printf("%d\n", prova2);
    return 0;
}