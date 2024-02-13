#include <stdio.h>

int main(){
    int alcool = 0, gasolina = 0, diesel = 0, code;

    while (1) {
        scanf("%d", &code);
        if (code == 1) {
            alcool++;
        }
        if (code == 2) {
            gasolina++;
        }
        if (code == 3) {
            diesel++;
        }
        if (code == 4) {
            break;
        }
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gasolina, diesel);


    return 0;
}