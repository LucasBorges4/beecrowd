#include <stdio.h>
typedef struct {
    int horas;
    int min;
} relogio;

int converter_horas(int);
int converter_min(int);

int main(void){
    relogio A, B;
    scanf("%d %d %d %d", &A.horas, &A.min, &B.horas, &B.min);
    int mins_totais_A = converter_horas(A.horas) + A.min, mins_totais_B = converter_horas(B.horas) + B.min;
    
    if (mins_totais_A >= mins_totais_B) {
        mins_totais_B += 1440;
        mins_totais_B -= mins_totais_A;
        int horas_totais = converter_min(mins_totais_B);
        mins_totais_B -= horas_totais*60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas_totais, mins_totais_B);
    }

    else {
        mins_totais_B -= mins_totais_A;
        int horas_totais = converter_min(mins_totais_B);
        mins_totais_B -= horas_totais*60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas_totais, mins_totais_B);
    }

    return 0;
}

int converter_horas(int horas){
    return horas*60;
}

int converter_min(int min){
    return min/60;
}