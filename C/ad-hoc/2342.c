//Overflow

#include <stdio.h>

int operatorio (int num1, int num2, char sinal){
    int resultado;
    switch (sinal) {
        case '+':
            resultado = num1 + num2;
            break;

        case '*':
            resultado = num1 * num2;
            break;
    }

    return resultado;
}

int main(){
    int limite, num1, num2, resultado;
    char sinal[0];

    scanf("%d", &limite);
    scanf("%d %c %d", &num1, sinal, &num2);

    resultado = operatorio(num1, num2, *sinal);
    
    if (resultado > limite) printf("OVERFLOW\n");

    else printf("OK\n");


    return 0;
}