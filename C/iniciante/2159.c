#include <stdio.h>
#include <math.h>

int main(){
    double menor, maior, constante = 1.25506;
    int n;
    scanf("%d", &n);
    menor = n/log(n);
    maior = menor;
    maior *= constante;
    printf("%.1lf %.1lf\n", menor, maior);

    return 0;
}