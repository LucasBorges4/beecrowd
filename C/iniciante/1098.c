#include "stdio.h"

int main(void){
    float i = 0, j = 1, constant = 1;
    float constant_float;
    for (int k = 1; k <= 33; k++){
        if (i == 0 || i == 1 || i > 2) {
        printf("I=%.0f J=%.0f\n", i, j);
        j++;
        if (k % 3 == 0){
            i += 0.2;
            j -= 3;
            j+=0.2;
            } 
        }
        else {
        printf("I=%.1f J=%.1f\n", i, j);
        j++;
        if (k % 3 == 0){
            i += 0.2;
            j -= 3;
            j+=0.2;
            } 
        }
    }
    return 0;
}