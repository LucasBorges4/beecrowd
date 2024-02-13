#include <math.h>
#include <stdio.h>


int main(void){
    long long int linha, resultado;
    scanf("%lld", &linha);
    resultado = pow(3, linha);
    printf("%lld\n", resultado);
    return 0;
}