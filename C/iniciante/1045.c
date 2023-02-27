#include <stdio.h>

int main() {
    double lado1, lado2, lado3, vetor[3];
    scanf("%lf %lf %lf", &vetor[0], &vetor[1], &vetor[2]);
    
    if (vetor[0] >= vetor[1]) {
        
        if (vetor[0]>= vetor[2]) {
            double temp = vetor[0];
            vetor[0] = vetor[2];
            vetor[2] = temp;
        }
        
        double temp = vetor[0];
        vetor[0] = vetor[1];
        vetor[1] = temp;
    }

    if (vetor[1]>= vetor[2]) {
            double temp = vetor[1];
            vetor[1] = vetor[2];
            vetor[2] = temp;
        }

    lado1 = vetor[2];
    lado2 = vetor[1];
    lado3 = vetor[0];

    if (lado1 >= lado2 + lado3 ) {
        printf("NAO FORMA TRIANGULO\n");
    }
    else {
        if (lado1*lado1 == lado2*lado2 + lado3*lado3 ) {
            printf("TRIANGULO RETANGULO\n");
        }
        
        if (lado1*lado1 > lado2*lado2 + lado3*lado3  ) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (lado1*lado1 < lado2*lado2 + lado3*lado3 ) {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if ((lado1 == lado2) && (lado2 == lado3) && (lado1 == lado3) ) {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if ((lado1 == lado2) || (lado2 == lado3) || (lado1 == lado3) ) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}