#include "stdio.h"

void Cedulas(int *a);

int main(void){
    int nota;
    scanf("%d", &nota);
    Cedulas(&nota);
    return 0;
}

void Cedulas(int *a){
    int nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0, nota5 = 0, nota2=0, nota1 = 0;

    nota100 = *a/100;
    nota50 = (*a-nota100*100)/50;
    nota20 = (*a-nota100*100 - 50 * nota50)/20;
    nota10 = (*a-nota100*100 - 50 * nota50 - 20*nota20)/10;
    nota5 = (*a-nota100*100 - 50 * nota50 - 20*nota20 - 10*nota10)/5;
    nota2 = (*a-nota100*100 - 50 * nota50 - 20*nota20 - 10*nota10 - 5*nota5)/2;
    nota1 = (*a - nota100*100 - 50*nota50 - 20*nota20 - 10*nota10 - 5*nota5 - 2*nota2);

    printf("%d\n", *a);
    printf("%d nota(s) de R$ 100,00\n", nota100);
    printf("%d nota(s) de R$ 50,00\n", nota50);
    printf("%d nota(s) de R$ 20,00\n", nota20);
    printf("%d nota(s) de R$ 10,00\n", nota10);
    printf("%d nota(s) de R$ 5,00\n", nota5);
    printf("%d nota(s) de R$ 2,00\n", nota2);
    printf("%d nota(s) de R$ 1,00\n", nota1);

}