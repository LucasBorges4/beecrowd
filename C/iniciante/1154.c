#include <stdio.h>
 
int main() {
    int num, qtd = 0;
    double sum = 0;
    while(1){
        scanf("%d", &num);

        if (num < 0) {
            break;
        }
        sum += num;
        qtd++;
    }
    sum = sum/qtd;
    printf("%.2lf\n", sum);
    
 
    return 0;
}