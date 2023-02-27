#include <stdio.h>

int neg_pos(float num){
    return num > 0 ? 1 : 0; 
}

int main(void){
    int i = 0;
    int count = 0;
    while(i < 6){
        float var;
        scanf("%f", &var);
        count += neg_pos(var);
        i++;
    }
    printf("%d valores positivos\n", count);

    return 0;
}