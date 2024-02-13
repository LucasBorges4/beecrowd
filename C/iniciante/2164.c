#include <stdio.h>
#include <math.h>

long double fibonacci(int posicao){
    long double num_c = sqrt(5);
    long double num_a = (1 + num_c)/2, num_b = (1 - num_c)/2;
    if (posicao == 1 || posicao == 2){
        return 1;
    }
    long double numero_final;
    numero_final = (pow(num_a, posicao) - pow(num_b, posicao))/num_c;
    return numero_final;
}

int main(){
    int entrada;
    scanf("%d", &entrada);
    long double fibonacci_final = fibonacci(entrada);
    printf("%.1Lf\n", fibonacci_final);
    return 0;
}
