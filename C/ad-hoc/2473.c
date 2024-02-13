#include <stdio.h>

int main(){
    int bet[6], lottery[6], acertos = 0;

    for (int i = 0; i < 6; i++) {
        scanf("%d", &bet[i]);
    }

    for (int i = 0; i < 6; i++) {
        scanf("%d", &lottery[i]);
    }

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (bet[i] == lottery[j]){
                acertos++;
                break;
            }
        }
    }

    switch (acertos) {
        case 3:
            printf("terno\n");
            break;
        case 4:
            printf("quadra\n");
            break;
        case 5:
            printf("quina\n");
            break;
        case 6:
            printf("sena\n");
            break;
        default:
            printf("azar\n");
            break;
    }


    return 0;
}