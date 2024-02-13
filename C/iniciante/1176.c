#include <stdio.h>  

long long int fibonacci(int posicao){
    long long int numero_final, num_a = 1, num_b = 1;
    if (posicao == 0) return 0; 
    if (posicao == 1 || posicao == 2){
        return 1;
    }
    for (int i = 2; i < posicao; i++) {
        long long int temp = num_a + num_b;
        num_a = num_b;
        num_b = temp;
    }

    numero_final = num_b;
    return numero_final;
}


int main(){
    int condit;
    scanf("%d", &condit);
    int i = 0;

    while (i < condit) {
        int posicao;
        scanf("%d", &posicao);
        printf("Fib(%d) = %lld\n", posicao, fibonacci(posicao));         
        i++;
    }

    return 0;
}