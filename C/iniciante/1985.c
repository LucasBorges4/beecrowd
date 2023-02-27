#include <stdio.h>
 
int main() {
    int cases, codigo, unidade;
    scanf("%d", &cases);
    float vetor[5] = {
        1.5, 2.5, 3.5, 4.5, 5.5
    }, valor_pagar = 0;

    int i = 0;
    while (i < cases) {
        scanf("%d %d", &codigo, &unidade);
        valor_pagar += (vetor[codigo - 1001])*unidade;
        i++;
    }
    printf("%.2f\n", valor_pagar);

    return 0;
}