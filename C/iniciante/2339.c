#include <stdio.h>


int main(void){
    int comp, folhas, receber;
    scanf("%d %d %d", &comp, &folhas, &receber);
    if (comp*receber <= folhas) printf("S\n");
    else printf("N\n");
    return 0;
}