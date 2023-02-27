#include <stdio.h>


int main(void){
    int num;
    while (scanf("%d", &num)) {
        if (num == 0) {
            break;
        }
        int soma = 0;
        int i = 0;
        while (i < 5) {
            if (num % 2 == 0) {
                soma += num;
                i++;
            }
            num++;
        }
        printf("%d\n", soma);
    }




    return 0;
}