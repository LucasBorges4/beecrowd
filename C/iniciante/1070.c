#include <stdio.h>

int main(){
    int num;

    scanf("%d", &num);

    int countimpar = 0;
    while (countimpar < 6) {
        if (num % 2 == 1){
            printf("%d\n", num);
            countimpar++;
        }
        num++;
    }

    return 0;
}