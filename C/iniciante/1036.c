#include "stdio.h"
#include "math.h"
#include <math.h>

double delta(double A, double B, double C){
    double resultado = B*B - 4* A*C;
    return resultado;
}

double raiz_1(double delta, double A, double B){
    double raiz;
    raiz = (-B + sqrt(delta))/2;
    return raiz;
}

double raiz_2(double delta, double A, double B){
    double raiz;
    raiz = (-B - sqrt(delta))/2;
    return raiz;
}

int main(void){
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    if (A == 0 || 4*A*C > B*B) {
        printf("Impossivel calcular\n");
        return 0;
    }

    double delta1 = delta(A, B, C);
    double raiz1 = raiz_1(delta1, A, B);
    double raiz2 = raiz_2(delta1, A, B);
    printf("R1 = %.5lf\nR2 = %.5lf\n", raiz1, raiz2);
    return 0;
}