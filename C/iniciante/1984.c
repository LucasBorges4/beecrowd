#include <stdio.h>
#include <string.h>
 
int main() {
    long long unsigned num;
    scanf("%llu", &num);

    while (num) {
        printf("%llu", num % 10);
        num/=10;
    }

    printf("\n");

    return 0;
}