#include <stdio.h>



int main(){
    int cases, x, y;

    scanf("%d", &cases);

    while (cases--) {
    int soma = 0;

    scanf("%d %d", &x, &y);

    if (x > y){
        int temp = x;
        x = y;
        y = temp;
    }

    for (int i = x+1; i < y; i++) {
        if (i % 2 == 1) {
            soma += i;
        }
    }

    printf("%d\n", soma);
    }
    return 0;
}