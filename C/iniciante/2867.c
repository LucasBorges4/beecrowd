#include <stdio.h>
#include <math.h>

unsigned int digits(unsigned int, unsigned int);

int main(void){
    unsigned int n, m;
    int cases;
    scanf("%d", &cases);
    while (cases--) {
    scanf("%u %u", &n, &m);
    unsigned digitos = digits(n, m);
    printf("%u\n", digitos);
    }
    return 0;
}

unsigned int digits(unsigned int n, unsigned int m){
    unsigned int x;
    x = 1 + m*log10(n);
    return x;
}
