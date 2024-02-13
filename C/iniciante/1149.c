#include <stdio.h>

int main(void) {
    int num, num2, soma = 0;

    scanf("%d", &num);

    do {
        scanf("%d", &num2);
    }while (num2 <= 0);

    for (int i = 0; i < num2; i++) {
        soma += num + i;
    }

    printf("%d\n", soma);

    return 0;
}