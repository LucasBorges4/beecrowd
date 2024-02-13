#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int valor_indice[10]= {
        6, 2, 5, 5, 4, 5, 6, 3, 7, 6
    };
    int casos_teste;
    scanf("%d", &casos_teste);
    
    int i = 0;
    char j[101];

    while (i < casos_teste) {
        int leds = 0;
        scanf("%s", j);
        int TAM = strlen(j);
        for (int i = 0; i < TAM; i++) {
            leds += valor_indice[(int)j[i] - 48];
            // -48 devido a tabela ASCI onde os digitos 0,1,2,3...
            // quando convertidos de char para int os valores retornados sao 
            // os códigos em ASCI que quando comparados no valor inteiro dá uma diferença de 
            // 48. interessante...
        }
        printf("%d leds\n", leds);
        i++;
    }
    return 0;
}