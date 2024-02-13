#include <stdio.h>


int main(){
    int vareta[4];
    scanf("%d %d %d %d", &vareta[0], &vareta[1], &vareta[2], &vareta[3]);

    if ((vareta[2] < vareta[0] + vareta[1]) && (vareta[1] < vareta[2] + vareta[0]) && (vareta[0] < vareta[2] + vareta[1])) {
        printf("S\n");
    }
    else if ((vareta[3] < vareta[0] + vareta[1]) && (vareta[1] < vareta[3] + vareta[0]) && (vareta[0] < vareta[3] + vareta[1])) {
        printf("S\n");
    }
    else if ((vareta[3] < vareta[2] + vareta[1]) && (vareta[1] < vareta[2] + vareta[3]) && (vareta[2] < vareta[3] + vareta[1])) {
        printf("S\n");
    }
    else if ((vareta[3] < vareta[2] + vareta[0]) && (vareta[0] < vareta[2] + vareta[3]) && (vareta[2] < vareta[3] + vareta[0])) {
        printf("S\n");
    }
    else {
        printf("N\n");
    }
    
    return 0;
}