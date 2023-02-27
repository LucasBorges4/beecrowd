#include <stdio.h>
 
float divisao(int dividendo, int divisor){
    float resultado;
    resultado = dividendo;
    resultado = resultado/divisor;    
    return resultado;
}

int main(void) {
    int dividendo, divisor;
    int i = 0, num;
    scanf("%d", &num);

    while ( i < num) {
        scanf("%d %d", &dividendo, &divisor);
        if (divisor == 0) {
            printf("divisao impossivel\n");
        }
        else {
            float resultado;
            resultado = divisao(dividendo, divisor);
            printf("%.1f\n", resultado);
        }
    i++;    
    }
        
    return 0;
}