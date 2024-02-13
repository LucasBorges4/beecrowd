#include <stdio.h>
 
int main(void) {
    int cases;
    long long num;
    scanf("%d", &cases);
    int i = 0;
    while (i < cases) {
        scanf("%lld", &num);
        if (num == 6 || num == 28 || num == 496 || num == 8128 || num == 33550336 || num == 8589869046 ||  num == 137438691328 || num == 2305843008139952){
            printf("%lld eh perfeito\n", num);
        }
        else {
            printf("%lld nao eh perfeito\n", num);
        }

        i++;
    }
 
    return 0;
}