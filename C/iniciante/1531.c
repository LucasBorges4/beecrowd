#include <stdio.h>
#include <math.h>

//// Nivel 10 precisa de noções mais complexas........... esse exercicio está incompleto.

/*
int fibonacci(int posicao){
    int numero_final, num_a = 1, num_b = 1;
    if (posicao == 1 || posicao == 2){
        return 1;
    }
    for (int i = 2; i < posicao; i++) {
        int temp = num_a + num_b;
        num_a = num_b;
        num_b = temp;
    }

    numero_final = num_b;
    return numero_final;
}
*/
// USE O COMANDO ABAIXO PARA RODAR EM LINUX
//gcc -o saida 1531.c -lm 
// agora dê ./saida

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


int main(void){
    int m, n;
    while(scanf("%d", &m) != EOF){
        long double operacao = fibonacci(m);
        //operacao = fibonacci(operacao);
        printf("%.1Lf\n", operacao);
    }
    return 0;
}