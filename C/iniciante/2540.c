#include <stdio.h>

int main(void){
    int entrada, votos, favoraveis;
    while (scanf("%d", &entrada) != EOF) {
        favoraveis = 0;
        for (int i = 0; i < entrada; i++) {
            scanf("%d", &votos);
            favoraveis += votos;
        }
        
        float maioria = 2*entrada;
        maioria = maioria/3;
        
        if (favoraveis >= maioria){
            printf("impeachment\n");
        }
        
        else {
            printf("acusacao arquivada\n");
        }
    }

    return 0;
}