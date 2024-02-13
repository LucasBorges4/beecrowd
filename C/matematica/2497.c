#include <stdio.h>

int piso(int num){
    double result;
    result = num;
    result = result/2; // Fazer isso para não ter perda na precisão.
    return result;
}

int main(void) {
    int num, i = 1;
    scanf("%d", &num);
    printf("Experiment %d: %d full cycle(s)\n", i, piso(num));
    i++;

    while (1) {
        scanf("%d", &num);
        if (num == -1) {
            break;
        }
        printf("Experiment %d: %d full cycle(s)\n", i, piso(num));
        i++;
    }

    return 0;
}