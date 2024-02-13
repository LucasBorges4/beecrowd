#include "stdio.h"

int main(){
    float A, B, C;
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);
    float MEDIA;
    MEDIA = A*2 + B*3 + C*5;
    MEDIA/=10;
    printf("MEDIA = %.1f\n", MEDIA);
    return 0;
}