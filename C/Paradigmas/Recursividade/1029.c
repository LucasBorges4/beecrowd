#include <stdio.h>

int fib(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n-1) + fib(n-2);
}

int fib_calls(int calls){
    if (calls == 0) return 1;
    if (calls == 1) return 1;
    
    return 1 + fib_calls(calls-1) + fib_calls(calls-2);
}


int main(void){
    int entradas, entrada;
    int i = 0;
    
    scanf("%d", &entradas);

    while (i < entradas){
        scanf("%d", &entrada);
        printf("fib(%d) = %d calls = %d\n", entrada, fib_calls(entrada) - 1, fib(entrada));  
        i++;
    }

    return 0;
}