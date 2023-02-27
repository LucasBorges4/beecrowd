#include <stdio.h>

int main(void){
    int num;
    scanf("%d", &num);
    const double constante = 2; //Raiz do numero que deseja encontrar.
    long double resultado = 0;
    for (int i = 0; i < num; i++) {
        resultado += constante;
        resultado = 1/resultado;
    }    
    resultado += constante/2;
    printf("%.10Lf\n", resultado);
    return 0;
}