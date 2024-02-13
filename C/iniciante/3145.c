#include <stdio.h>

float dias(int anoes, int distancia){
    float resultado;
    resultado = distancia;
    resultado = resultado/(anoes+2);
    return resultado;
}
 
int main(void) {
    int anoes, distancia;
    scanf("%d %d", &anoes, &distancia);
    float dias_totais = dias(anoes, distancia);
    printf("%.2f\n", dias_totais);

    return 0;
}