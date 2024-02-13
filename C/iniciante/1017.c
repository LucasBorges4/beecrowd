#include <stdio.h>


int main(void){
     //automovel 12km/litro, calcular litros necessarios durante viagem
    // entrada é o tempo em horas e a velocidade media km/h, 3 casas decimais
    double horas, veloc_med, litros, distancia;
    scanf("%lf\n%lf", &horas, &veloc_med);
    distancia = veloc_med * horas;
    litros = distancia/12;
    printf("%.3lf\n", litros);

    return 0;
}