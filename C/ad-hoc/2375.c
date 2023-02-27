#include <stdio.h>
 
int main(void) {
    int altura, largura, diametro, profundidade;

    scanf("%d", &diametro);
    scanf("%d %d %d", &altura, &largura, &profundidade);
    
    if (diametro > altura) {
        printf("N\n");
    }
    else if (diametro > largura) {
        printf("N\n");
    }
    else if (diametro > profundidade) {
        printf("N\n");
    }
    
    else {
        printf("S\n");
    }


    return 0;
}