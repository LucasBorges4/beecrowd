#include <math.h>
#include <stdio.h>

int main(void) {
    int num;
    scanf("%d", &num);
    int soma, linha;
    int i = 0;
    while (i < num) {
        scanf("%d", &linha);
        soma = pow(2, linha);
        soma--;
        printf("%d\n", soma);
        i++;
    }
 

      return 0;
}
