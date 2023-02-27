#include <stdio.h>

int neg_to_pos(int num){
    if (num < 0) num*=-1;
    return num;
}

int main(void){
    int A, B, result;
    scanf("%d %d", &A, &B);

    if (A >= B) result = neg_to_pos(A-24) + B;
    else if (A < B) result = B - A;


    printf("O JOGO DUROU %d HORA(S)\n", result);
    return 0;
}