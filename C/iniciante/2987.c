#include <stdio.h>


int main(){
    char letra[1];
    scanf("%c", letra);
    int posicao = letra[0] -'0';
    posicao -= 16; //tabela ascii, PORÉM RECOMENDO PRINTAR POSICAO LETRA PARTE 1

    printf("%d\n", posicao);

    //voce também  pode montar uma string percorrer ela e contar a posicao, eu fiz primeiramente assim mas... decidi fazer de novo assim fica melhor.
    
    return 0;
}