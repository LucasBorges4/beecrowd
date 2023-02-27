#include <stdio.h>
 
int main() {
    int num, qtdpares = 0;
    
    int i = 0;

    while (i < 5) {
        scanf("%d", &num);
        if (num % 2 == 0) qtdpares++;
        i++;
        
    }
    printf("%d valores pares\n", qtdpares);
    return 0;
}