#include <stdio.h>
 
int main() {
    int m, n;
    while (1) {
        scanf("%d %d", &m, &n);
        if (m <= 0 || n <= 0) {
            break;
        }
        if (m > n) {
            int temp;
            temp = m;
            m = n;
            n = temp;
        }
        int i, soma = 0;

        for (i = m; i <= n; i++) {
            printf("%d ", i);
            soma += i;
        }
        printf("Sum=%d\n", soma);

    }
    
    return 0;
}