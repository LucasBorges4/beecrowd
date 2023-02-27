#include <stdio.h>

struct funcionario{
    int numero;
    int horas;
    double salario_por_hora;
};


int main(){
    struct funcionario pessoa;
    scanf("%d %d %lf", &(pessoa.numero), &(pessoa.horas), &(pessoa.salario_por_hora));
    double salario_total = pessoa.salario_por_hora*pessoa.horas;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", pessoa.numero, salario_total);

}