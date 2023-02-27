#include <stdio.h>
#include <string.h>


int main(void){
    char frase[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int num;
    scanf("%d", &num);

    int TAM = strlen(frase);
    
    for (int i = 0; i < num; i++){
        printf("%c", frase[i]);
    }

    printf("\n");


    return 0;
}