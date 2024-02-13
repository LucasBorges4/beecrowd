#include <stdio.h>

int main(void){
    int x, z;
    scanf("%d", &x);
    while (scanf("%d", &z)) {
        if (z > x) break;
    }
    int soma = 0, i = 0;
    while (soma < z) {
        soma += x + i;
        i++;
    }
    printf("%d\n", i);
    return 0;
}