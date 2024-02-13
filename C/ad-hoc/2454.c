#include <stdio.h>

int main(){
    int Portinha_P, Portinha_R;

    scanf("%d %d", &Portinha_P, &Portinha_R);

    if (Portinha_P) {
        if (Portinha_R) printf("A\n");
        else
            printf("B\n");
    }
    else {
        printf("C\n");
    }

    return 0;
}