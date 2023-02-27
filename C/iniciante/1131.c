#include <stdio.h>

int main(void){

    int gols_inter, gols_gremio;
    int novo_grenal = 1, num_grenais = 0;
    int vitoria_inter = 0, vitoria_gremio = 0, empates = 0;
    char *nome_gremio = "Gremio", *nome_inter = "Inter", *nome_final;
    
    do{
        scanf("%d %d",  &gols_inter, &gols_gremio);
        
        printf("Novo grenal (1-sim 2-nao)\n");
        
        scanf("%d", &novo_grenal);
        if (gols_gremio > gols_inter) {
            vitoria_gremio++;
        }
        else if (gols_inter > gols_gremio) {
            vitoria_inter++;
        }
        else {
            empates++;
        }
    num_grenais++;
    }
    while (novo_grenal != 2);
    if (vitoria_inter > vitoria_gremio) nome_final = nome_inter;
    else if (vitoria_gremio > vitoria_inter) nome_final = nome_gremio;
    else nome_final = "Nao houve vencedor";
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n%s venceu mais\n", num_grenais, vitoria_inter, vitoria_gremio, empates, nome_final);
    
    return 0;
}