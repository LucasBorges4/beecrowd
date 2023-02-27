#include <stdio.h>

int main(void){
    int num;
    scanf("%d", &num);

    double valor1, valor2, valor3;
    double media;
    
    int i = 0;
    while (i < num) {
        scanf("%lf %lf %lf", &valor1, &valor2, &valor3);
        media = 2*valor1 + 3*valor2 + 5*valor3;
        media = media/10;
        printf("%.1lf\n", media);
        i++;
    }
    return 0;
}