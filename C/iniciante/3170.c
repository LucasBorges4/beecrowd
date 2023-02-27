#include <stdio.h>

int piso(int i, int divisor){
    float resultado = i;
    resultado = resultado/divisor;
    return resultado;
}

int main() {
    int galhos, bolinhas, faltam;
    scanf("%d %d", &bolinhas,  &galhos);
    int proporcao;
    proporcao = piso(galhos, 2);
    if (bolinhas >= proporcao) {
        printf("Amelia tem todas bolinhas!\n");
    }
    else {
        faltam = galhos/2;
        faltam-= bolinhas;
        printf("Faltam %d bolinha(s)\n", faltam);
    }

    return 0;
}