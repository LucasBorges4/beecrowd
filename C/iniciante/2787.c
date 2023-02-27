#include <stdio.h>


int main(void){
    int linha, coluna, padrao_soma_mod;
    scanf("%d %d", &linha, &coluna);
    padrao_soma_mod = linha + coluna;
    if (padrao_soma_mod % 2 == 0) printf("1\n");
    else printf("0\n");

    return 0;
}