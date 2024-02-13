#include "stdio.h"
#include <math.h>

void Cedulas(float a);
int div_int(float a, float num);

int main(void){
    float nota;
    scanf("%f", &nota);
    Cedulas(nota);
    return 0;
}


int div_int(float a, float num){
    return a/num;
}

void Cedulas(float a){
    int nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0, nota5 = 0, nota2 = 0;
    float moeda100 = 0, moeda50 = 0, moeda25 = 0, moeda10 = 0, moeda5 = 0, moeda1 = 0;

    nota100 = div_int(a, 100);
    a-= 100*nota100;
    nota50 = div_int(a, 50);
    a -= 50*nota50;
    nota20 = div_int(a, 20);
    a-= 20*nota20;
    nota10 = div_int(a, 10);
    a-= 10*nota10;
    nota5 = div_int(a, 5);
    a-= 5*nota5;
    nota2 = div_int(a, 2);
    a -= 2*nota2;
    moeda100 = div_int(a, 1);
    a -= moeda100;
    a *= 100;
    moeda50 = div_int(a, 50);
    a -= moeda50*50;
    moeda25 = div_int(a, 25);
    a -= moeda25*25;
    moeda10 = div_int(a, 10);
    a -= moeda10*10;
    moeda5 = div_int(a, 5);
    a -= moeda5*5;
    moeda1 = a;


    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nota100);
    printf("%d nota(s) de R$ 50.00\n", nota50);
    printf("%d nota(s) de R$ 20.00\n", nota20);
    printf("%d nota(s) de R$ 10.00\n", nota10);
    printf("%d nota(s) de R$ 5.00\n", nota5);
    printf("%d nota(s) de R$ 2.00\n", nota2);
    printf("MOEDAS:\n");
    printf("%.0f moeda(s) de R$ 1.00\n", moeda100);
    printf("%.0f moeda(s) de R$ 0.50\n", moeda50);
    printf("%.0f moeda(s) de R$ 0.25\n", moeda25);
    printf("%.0f moeda(s) de R$ 0.10\n", moeda10);
    printf("%.0f moeda(s) de R$ 0.05\n", moeda5);
    printf("%.0f moeda(s) de R$ 0.01\n", moeda1);
}