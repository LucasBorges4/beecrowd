#include <stdio.h>
 
int main() {
    int num, qtdpares = 0, qtdimpares = 0, qtdneg = 0, qtdpos = 0;
    
    int i = 0;

    while (i < 5) {
        scanf("%d", &num);
        if (num % 2 == 0) qtdpares++;
        else qtdimpares++;

        if (num< 0) {
            qtdneg++;
        }
        else if (num>0) {
            qtdpos++;
        }
        i++;       
    }

    printf("%d valor(es) par(es)\n", qtdpares);
    printf("%d valor(es) impar(es)\n", qtdimpares);
    printf("%d valor(es) positivo(s)\n", qtdpos);
    printf("%d valor(es) negativo(s)\n", qtdneg);

    return 0;
}