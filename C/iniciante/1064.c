#include <stdio.h>

int neg_pos(float num){
    return num > 0 ? 1 : 0; 
}

int main(void){
    int i = 0;
    int count = 0;
    float media = 0;

    while(i < 6) {
        float var;
        scanf("%f", &var);
        
        if (neg_pos(var)){
            media += var;
            count++;
        }

        i++;
    }
    media = media/count;
    
    printf("%d valores positivos\n", count);
    printf("%.1f\n", media);

    return 0;
}