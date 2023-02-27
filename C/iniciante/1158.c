#include <stdio.h>


int main(void){
    int num, qtd_consec, qtd_init;
    scanf("%d", &num);
    
    int j = 0;
    while (j  < num) {
        scanf("%d %d", &qtd_init, &qtd_consec);
        
        int soma = 0;
        int passed = 0;
        for (int i = qtd_init ; passed < qtd_consec ; i++) {
            
            if (i % 2 == -1) {
                soma += i;
                passed++;
            }
            else if (i % 2 == 1) {
                soma += i;
                passed++;
            }
        }
        
        printf("%d\n", soma);
        j++;
    }

    return 0;
}