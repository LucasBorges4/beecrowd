#include <stdio.h>


int main(void){

    int cases;

    scanf("%d", &cases);

    int i = 0;

    while (i < cases) {
        int num;
        scanf("%d", &num);
        if (num % 2 == 1) {
            printf("1\n");
        }
        else if (num % 2 == 0) {
            printf("0\n");
        }
        i++;
    }

    return 0;
}