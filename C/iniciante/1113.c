#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int primeiro, segundo;
    while(1){
        scanf("%d %d", &primeiro, &segundo);
        if (primeiro > segundo) {
            printf("Decrescente\n");
        }
        else if (primeiro < segundo) {
            printf("Crescente\n");
        }
        else {
            break;
        }
    }
    
    return 0;
}