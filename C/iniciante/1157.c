#include "stdio.h"


void divisores(int a){
    for (int i = a; i > 0; i--) {
        if (a % i == 0){
            printf("%d\n", a/i);
        }
    }
}


int main(void){
    int num;
    scanf("%d", &num);
    divisores(num);

    return 0;
}