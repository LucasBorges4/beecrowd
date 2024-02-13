#include <stdio.h>

typedef struct {
    int codigo;
    int num_peca;
    float preco;
} peca;

int main(){
    peca peca1, peca2;
    scanf("%d %d %f", &peca1.codigo, &peca1.num_peca, &peca1.preco);
    scanf("%d %d %f", &peca2.codigo, &peca2.num_peca, &peca2.preco);

    float total = peca1.num_peca*peca1.preco + peca2.num_peca * peca2.preco;
    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}