#include <stdio.h>
int main(void){
    int num_respostas, resp;
    scanf("%d", &num_respostas);
    int i = 0;
    while (i < num_respostas) {
    scanf("%d", &resp);
    printf("resposta %d: %d\n", i+1, resp);
    i++;
    }

    return 0;
}