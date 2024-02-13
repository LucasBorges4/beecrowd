#include <stdio.h>
 
int main() {
    int num;
    scanf("%d", &num);
    
    int i = 1;
    while (i <= num) {
        if (i % 2 == 1) printf("%d\n", i);
        i++;       
    }

    return 0;
}