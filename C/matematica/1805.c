#include <stdio.h>

int main(void) {
    long long int A, B;
    scanf("%lld %lld", &A, &B);
    long long int sum;
    sum = A + B;
    sum = sum * (B - A + 1);
    sum = sum/2;
    printf("%lld\n", sum);

    return 0;
}