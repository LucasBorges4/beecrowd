#include "stdio.h"

int main(void){
    int i = 1, j = 7, constant = 1;
    for (int k = 1; k <= 15; k++){
        printf("I=%d J=%d\n", i, j);
        j--;
        if (k % 3 == 0){
            i += 2;
            j += 5;
        } 
    }
    return 0;
}