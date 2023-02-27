#include <stdio.h>


int main(){
    int matriz_quadrada_tam;


    while (1){
    scanf("%d", &matriz_quadrada_tam);
    if (matriz_quadrada_tam == 0) break;

    int matriz[matriz_quadrada_tam][matriz_quadrada_tam];

    for (int i = 0; i < matriz_quadrada_tam; i++) {
        for (int j = 0; j < matriz_quadrada_tam; j++) {
            matriz[i][j] = 1;
        }
    }

    int k = matriz_quadrada_tam-4;
    
    if (k < 0) {
        k = 0;
    }
    
    do {
        for (int i = 0; i < matriz_quadrada_tam; i++) {
        for (int j = 0; j < matriz_quadrada_tam; j++) {
            if (j > 0+k && i > 0+k) {
                if (j < matriz_quadrada_tam-1-k && i < matriz_quadrada_tam-1-k) matriz[i][j] += 1;
                }
            }
        }
    }
    while (k-- > 0);
    
    for (int i = 0; i < matriz_quadrada_tam; i++){
			for (int j = 0; j < matriz_quadrada_tam; j++){
				if (j == 0)
					printf("%3d", matriz[i][j]);
				else
					printf(" %3d", matriz[i][j]);
			} printf("\n");
		}printf("\n");
    }
    return 0;
}
