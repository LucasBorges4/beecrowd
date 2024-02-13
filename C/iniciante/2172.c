#include <stdio.h>
 
int main() {
    int X;
    long long int M, E;

    while (1) {
    
    scanf("%d %lld", &X, &M);
    if (X == 0 && M == 0) {
        break;
    }
    E = X*M;
    printf("%lld\n", E);
    }

    return 0;
}