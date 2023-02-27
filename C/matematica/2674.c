#include <math.h>
#include <stdio.h>
#include <string.h>

int ehprimo(int num){
    int j, ehprimo = 1;
    if (num == 1 || num == 0) return 0;
    if (num == 2) return ehprimo;
    if (num % 2 == 0) return 0;
    for (j = 3; j < sqrt(num)+1; j+=2){
        if (num % j == 0){
            return 0;
            break;
        }    
    }
    return ehprimo;
}

int main(void){
    int TAM_MAX = 5, TAM;
    char num[TAM_MAX];
    while (scanf("%s", num) != EOF) {
        int super = 1, primo = 1, nada = 0;
        int numero_total = 0;
        TAM = strlen(num);
        for (int i = 0; i < TAM; i++) {
            int digit = num[i] - '0';
            if (ehprimo(digit) == 0 || digit == 1 || digit == 0) {
                super = 0;
            }
            numero_total += (digit * pow(10, TAM - i - 1));

        }
        
        primo = ehprimo(numero_total);

        if (primo && super) {
            printf("Super\n");
        }

        else if (primo) {
            printf("Primo\n");
        } 
        
        else {
            printf("Nada\n");
        }
    }   
}