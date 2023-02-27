#include <stdio.h>
#include <math.h>

int main(void){

    int i;
    double x;
    scanf("%lf", &x);
    for (i = 0; i < 100; i += 1) {
        printf("N[%d] = %.4lf\n", i, x/pow(2, i));
    }
    return 0;
}