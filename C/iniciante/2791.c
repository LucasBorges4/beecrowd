#include <stdio.h>


int main(void){
    int posi[4], guardar;
    int i = 0;
    while (i < 4) {
        scanf("%d", &posi[i]);
        if (posi[i] == 1) {
            guardar = i;
        }
        i++;
    }
    printf("%d\n", guardar+1);
    return 0;
}