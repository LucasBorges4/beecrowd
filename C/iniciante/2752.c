#include <stdio.h>
int main(void){
    char frase[50] = "AMO FAZER EXERCICIO NO URI";
    printf(
    "<%s>\n" \
    "<%30s>\n" \
    "<%.20s>\n" \
    "<%-20s>\n" \
    "<%-30s>\n" \
    "<%.30s>\n" \
    "<%30.20s>\n" \
    "<%-30.20s>\n" \
    ,frase, frase, frase, frase, frase, frase, frase, frase);



    return 0;
}