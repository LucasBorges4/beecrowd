#include <stdio.h>


int main(void){
    int num, casas_brancas = 0, casas_pretas = 0;
    scanf("%d", &num);
    for(int i = 0; i < num; i++)
        for (int j = 0; j < num; j++)
            if ((i+j) % 2 == 0) casas_brancas++;
            else casas_pretas++;

    printf("%d casas brancas e %d casas pretas\n", casas_brancas, casas_pretas);
    return 0;
}