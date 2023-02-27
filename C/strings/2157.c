#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int num_inicial, num_final, cases;
    
    scanf("%d", &cases);
    
    int control = 0;

    while (control < cases) {
        scanf("%d %d", &num_inicial, &num_final);
        for (int i = num_inicial; i <= num_final; i++) {
            printf("%d", i);
        }
        for (int i = num_final; i >= num_inicial; i--) {
            int digito_invertido = i;
            while (digito_invertido){
                int temp = digito_invertido;
                temp = temp % 10; //pega o ultimo digito na ultima casa.
                printf("%d", temp);
                digito_invertido/=10; //"diminui o numero de casas". dividir x < 10 por 10 'retorna' 0;
            }
        }
        printf("\n");
        control++;
    }

    return 0;
}