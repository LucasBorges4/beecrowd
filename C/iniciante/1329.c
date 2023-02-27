#include <stdio.h>
#include <string.h>

int main(void){
    int num = 0, caraoucoroa;
    while ((scanf("%d", &num) && num != 0)) {
        //scanf retorna 0 caso a entrada nao seja um inteiro.
        // por isso a logica booleana com num ja que num precisa ser 0 para interromper o codigo.
        int john = 0, mary = 0;
        for (int i = 0; i < num; i++) {
            scanf("%d", &caraoucoroa);
            if (caraoucoroa) john++;
            else mary++;
        }
    printf("Mary won %d times and John won %d times\n", mary, john);
    }
    return 0;
}