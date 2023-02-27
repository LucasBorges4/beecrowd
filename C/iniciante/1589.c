#include <stdio.h>

int main(void){
    int init, R1, R2;
    scanf("%d", &init);
    int i = 0;
    while (i < init) {
        scanf("%d %d", &R1, &R2);
        printf("%d", R1+R2);
        i++;
    }
    return 0;
}