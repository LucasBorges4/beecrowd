#include <stdio.h>

long int div(int qtd_gas, double volume_esfera){
    float result;
    result = qtd_gas;
    result /= volume_esfera;
    return result;
}

int main(void){

    long int raio, qtd_gas, num_balao;
    double volume_esfera;
    double pi = 3.1415;
    scanf("%ld %ld", &raio, &qtd_gas);
    volume_esfera = raio*raio*raio*4*pi/3;
    num_balao = div(qtd_gas, volume_esfera);
    printf("%ld\n", num_balao);

    return 0;
}