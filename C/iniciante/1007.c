#include "stdio.h"

int main(){
    float A, B, C, D;
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);
    scanf("%f", &D);
    float DIFERENCA;
    DIFERENCA = A*B - C*D;
    
    printf("DIFERENCA = %.0f\n", DIFERENCA);
    return 0;
}