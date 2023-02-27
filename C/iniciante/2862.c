#include <stdio.h>


int main(){
    int cases;
    scanf("%d", &cases);
    while (cases--){
        int num;
        scanf("%d", &num);

        if (num > 8000) printf("Mais de 8000!\n");
        else printf("Inseto!\n");
    }

    return 0;
}