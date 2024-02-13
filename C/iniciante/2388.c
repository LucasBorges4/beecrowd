#include <stdio.h>


int main(void){
    int num;
    scanf("%d", &num);
    int i = 0, dst_total = 0;
    while (i < num ) {
        int time, veloc;
        scanf("%d %d", &time, &veloc);
        dst_total += time*veloc;
        i++;
    }

    printf("%d\n", dst_total);
    return 0;
}