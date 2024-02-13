#include <stdio.h>
#include <string.h>

int main(void){
    char palavra[20];
    scanf("%s", palavra);
    int TAM = strlen(palavra);
    if(TAM >= 10) printf("palavrao\n");
    else printf("palavrinha\n");

    return 0;
}