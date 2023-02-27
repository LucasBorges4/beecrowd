#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

#define MAX 2000001

bool ehprimo(unsigned int);
bool numero_quadrado_perfeito(unsigned int);

unsigned num_divisores(unsigned int);
//unsigned hiperprimo(unsigned int);

bool vetor_primos[MAX], vetor_hiperprimos[MAX];
unsigned soma_hiper[MAX], ultimoprimo = 3;
unsigned vetor_divisores[MAX];

int main(void){   
    
    //seta no vetor primos o valor verdadeiro para todos;
    memset(vetor_primos, false, MAX);
    int soma = 0;
    for (int i = 2; i < MAX; i++){
        if (ehprimo(i)) {
            vetor_primos[i] = true;
            vetor_hiperprimos[i] = true;
        }
        else {
            if (numero_quadrado_perfeito(i)) vetor_divisores[i] = num_divisores(i);
        }
    }

    unsigned num;
    while((scanf("%u", &num)) != EOF){
        printf("%d\n", vetor_primos[num]);
    }

    return 0;
}

bool ehprimo(unsigned num){
    unsigned j, ehprimo = 1;
    if (num == 1 || num == 0) return 0;
    if (num == 2) return ehprimo;
    if (num % 2 == 0) return 0;

    for (j = 3; j <= sqrt(num); j+= 2){
        if (num % j == 0){
            return 0;
            break;
        }    
    }
    ultimoprimo = num;
    return ehprimo;
}

bool numero_quadrado_perfeito(unsigned num){
    int raiz = sqrt(num);
    return ((raiz*raiz) == num)? 1: 0;
}

unsigned num_divisores(unsigned num){
    int num_divisores = 0, ele_mesmo_e_1 = 2, divisor_min = 2;
    do {
        if (vetor_primos[num]) {
            return ele_mesmo_e_1;
        }
        
        if (vetor_primos[divisor_min]){
            if (num % divisor_min == 0){
                for (int i = divisor_min; i <= num/divisor_min; i++) {
                    if (num % i == 0) num_divisores++;
                    }
                }
            else {
                if (divisor_min % 2 == 0) divisor_min++;
                else divisor_min += 2;
            }
        }

    } while (num_divisores == 0);
    return num_divisores + ele_mesmo_e_1;
}

/*
unsigned hiperprimo(unsigned num){
    int qtd_hiperprimo = 0;
        if (num % 2 == 0) {
            if (numero_quadrado_perfeito(num) || num == 2){
                if (vetor_primos[num_divisores(num)]){
                    qtd_hiperprimo++;
                };
            }
        }
        else {
            if (vetor_primos[num]) {
                qtd_hiperprimo++;
            }
            else if (vetor_primos[num_divisores(num)]) {
                qtd_hiperprimo++;
            }
        }
    return qtd_hiperprimo;
}*/