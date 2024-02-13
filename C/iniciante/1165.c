#include <stdio.h>
#include <math.h>
 
int ehprimo(int num){
    int j, ehprimo = 1;
    if (num == 1 || num == 0) return 0;
    if (num == 2) return ehprimo;
    if (num % 2 == 0) return 0;
    for (j = 3; j < sqrt(num)+1; j+=2){
        if (num % j == 0){
            return 0;
            break;
        }    
    }
    return ehprimo;
}

int main(void) {
    int cases, num;
    scanf("%d", &cases);
    while (cases--) {
        scanf("%d", &num);
        int ehprimo_var = ehprimo(num);
        if (ehprimo_var) {
            printf("%d eh primo\n", num);
        }
        else {
            printf("%d nao eh primo\n", num);
        }
    }
 
    return 0;
}