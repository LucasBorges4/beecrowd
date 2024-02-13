#include <stdio.h>
 
int main() {
    int multiplicando, resultado;
    scanf("%d", &multiplicando);

    for (int i = 1; i <= 10; i++) {
        resultado = multiplicando*i;
        printf("%d x %d = %d\n", i, multiplicando, resultado);
    }
 
    return 0;
}