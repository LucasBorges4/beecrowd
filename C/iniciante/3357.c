#include <stdio.h>

typedef struct {
    char nome[12];
    double qtd_cuia;
}Cuia;

int div(double num, double num2){
    double result;
    result = num;
    result /= num2; 
    return result;
};

int main(void){

    Cuia Pessoas[10];
    int num_pessoas;
    double qtd_garrafa, qtd_cuia;

    scanf("%d %lf %lf", &num_pessoas, &qtd_garrafa, &qtd_cuia);
    
    for (int i = 0; i < num_pessoas; i++) {
        scanf("%11s", Pessoas[i].nome);
    }

    int i = 0;
    int pessoa_fim = div(qtd_garrafa, qtd_cuia);
    int mod = pessoa_fim % num_pessoas;
    
    if (qtd_garrafa - pessoa_fim*qtd_cuia <= 0) {
        if (mod == 0) mod = num_pessoas - 1;
        else mod--;
        Pessoas[mod].qtd_cuia = qtd_cuia;
    }

    else {
        Pessoas[mod].qtd_cuia = qtd_garrafa - pessoa_fim*qtd_cuia;
    }
   
    printf("%s %.1lf\n", Pessoas[mod].nome, Pessoas[mod].qtd_cuia);

    return 0;
}