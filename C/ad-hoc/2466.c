#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    int entrada[num];

    for (int j = 0; j < num; j++) {
        scanf("%d", &entrada[j]);
    }
    
    enum{
        preta = 1,
        branca = -1
    };
    
    int i = num;
    while (i > 1) {
        int soma[i];
        
        for (int k = 0; k < i-1; k++) {
            soma[k] = entrada[k] + entrada[k+1];
            if (soma[k] == 0) soma[k] = branca;
            else if (soma[k] == -2 || soma[k] == 2) soma[k] = preta;
            entrada[k] = soma[k];
            }

        i--;
    }

    if (entrada[0] == 1){
        printf("preta\n");
    }
    else if (entrada[0] == -1){
        printf("branca\n");
    }
    
    return 0;
}