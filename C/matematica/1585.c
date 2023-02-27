#include <stdio.h>
 
int main() {
    int num, var, var2;
    scanf("%d", &num);
    int i = 0;
    int operacao;
    while (i < num) {
        scanf("%d %d", &var, &var2);
        operacao = var*var2/2;
        printf("%d cm2\n", operacao);
        i++;
    }

    return 0;
}