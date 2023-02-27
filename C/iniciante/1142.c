#include "stdio.h"

int main(void){
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        printf("%d %d %d PUM\n", i+3*i+1, i + 1+3*i+1, i + 2 + 3*i+1);
    }

    return 0;
}