#include "stdio.h"


int main(void){
    int a;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        printf("%d %d %d", i, i*i, i*i*i);
        printf("\n");
    }

    printf("\n");
    return 0;
}