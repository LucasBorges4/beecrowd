#include <stdio.h>

char* neg_pos(int num){
    int negative;
    return num < 0 ? "NEGATIVE": "POSITIVE";
}

char* even_odd(int num){
    int negative;
    return num % 2 == 0 ? "EVEN": "ODD";
}

int main(void){
    int num;
    scanf("%d", &num);
    int i = 0;
    while(i < num){
        int j;
        scanf("%d", &j);
        if (j == 0) printf("NULL\n");
        else {
            printf("%s %s\n", even_odd(j), neg_pos(j));
        }
        i++;
    }

    return 0;
}