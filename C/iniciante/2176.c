#include <stdio.h>
#include <string.h>


int main(void){
    char S[101];
    scanf("%s", S);
    int TAM = strlen(S);
    int bits1 = 0;
    for (int i = 0; i < TAM; i++) {
        if (S[i] == '1'){
            bits1++;
        }
    }

    //fase de concatenação do bit
    
    if (bits1 % 2 == 0) {
        sprintf(S + TAM, "%c", '0');
    }
    else {
        sprintf(S + TAM, "%c", '1');
    }

    printf("%s\n", S);
    
    return 0;
}