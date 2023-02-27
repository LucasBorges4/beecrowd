#include <stdio.h>
 
int main() {
    int qtd_cons, qtd_parti; 

    scanf("%d %d", &qtd_cons, &qtd_parti);

    float media;
    media = qtd_cons;
    media = media/qtd_parti;
    printf("%.2f\n", media);

    return 0;
}