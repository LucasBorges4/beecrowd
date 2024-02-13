#include <stdio.h>

int main(void){
    int num;
    scanf("%d", &num);

    int valor, max, pos;
    scanf("%d", &valor);
    max = valor;
    pos = 1;
    
    int i = 3;
    while (i <= 100) {
        scanf("%d", &valor);
        if (max < valor) {
            max = valor;
            pos = i;
        }
        i++;
    }
    printf("%d\n%d\n", max, pos);

    return 0;
}