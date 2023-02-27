#include <stdio.h>


int main(void){
    int min;
    int min_rest1, min_rest2;
    scanf("%d", &min);
    scanf("%d %d", &min_rest1, &min_rest2);
    if (min < min_rest1+min_rest2) printf("Deixa para amanha!\n");
    else printf("Farei hoje!\n");
    return 0;
}