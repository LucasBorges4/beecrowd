#include <stdio.h>


int main(){
    double num, num2;
    scanf("%lf %lf", &num, &num2);
    const double init = 1;
    double result;
    num/=100;
    num2/=100;
    result = 1*(init + num);
    result = result*(1 + num2);
    result-=init;
    result*=100;
    printf("%.6lf\n", result);
    return 0;
}