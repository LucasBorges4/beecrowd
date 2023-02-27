#include "stdio.h"

int main(){
    float A, B, C;
    scanf("%f", &A);
    scanf("%f", &B);
    C = A*3.5 + B*7.5;
    C/=11;
    printf("MEDIA = %.5f\n", C);
    return 0;
}