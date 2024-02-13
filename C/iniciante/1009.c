#include <stdio.h>
struct funcionario{
    char nome[15];
    double salario_fixo;
    double vendas_totais_em_dinheiro;
};


int main(){
    struct funcionario pessoa;
    scanf("%s %lf %lf", pessoa.nome, &(pessoa.salario_fixo), &(pessoa.vendas_totais_em_dinheiro));
    double salario_total = pessoa.salario_fixo + pessoa.vendas_totais_em_dinheiro*0.15;
    printf("TOTAL = R$ %.2lf\n", salario_total);
}