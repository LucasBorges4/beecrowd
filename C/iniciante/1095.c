#include "stdio.h"


void sequenciaIJ(void){
    int i = 1, j = 60;
    for(int k = 0; k < 13; k++){
        printf("I=%d J=%d\n", i, j);
        i += 3, j-=5;
    }

}

int sequenciaIJ_recursivo(int i, int j){
    printf("I=%d J=%d\n", i, j);
    if (j == 0){
        return 0;
    }
    return sequenciaIJ_recursivo(i+3, j-5);
}

int main(void){
    sequenciaIJ_recursivo(1, 60);
    return 0;
}