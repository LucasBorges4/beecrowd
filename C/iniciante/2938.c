#include "stdio.h"

int convidados(int* a, int* b, int* c, int* d, int* e){
    *a = *a * 300;
    *b = *b * 1500;
    *c = *c * 600;
    *d = *d * 1000;
    *e = *e * 150;
    int resultado = *a + *b + *c + *d + *e + 225;

    return resultado;
}



int main(void){
    int var, var2, var3, var4, var5;
    scanf("%d\n%d\n%d\n%d\n%d", &var, &var2, &var3, &var4, &var5);
    printf("%d\n", convidados(&var, &var2, &var3, &var4, &var5));
    return 0;
}