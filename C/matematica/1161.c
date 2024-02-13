#include <stdio.h>

long long int fatorial(int num){
    long long int resultado = 1;
    for (int i = 1; i <= num; i++) {
        resultado *= i;
    }
    return resultado;
}

int main(void){
    int m, n;
    
    while (scanf("%d %d", &m, &n) != EOF) {
        long long int soma = 0;
        soma += fatorial(m);
        soma += fatorial(n);
        printf("%lld\n", soma);
    }    
    
    return 0;
}