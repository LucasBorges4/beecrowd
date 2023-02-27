#include <stdio.h>
#include <math.h>

int main(void){
    long long int x, y;
    scanf("%lld %lld", &x, &y);
    long long int soma = 0;

    if (y > x) {
        int temp = x;
        x = y;
        y = temp;
    }
    
    long long int i;

    for (i = y; i <= x; i++) {
        if (i % 13 != 0) {
        soma += i;
        }
    }

    printf("%lld\n", soma);

    return 0;
}