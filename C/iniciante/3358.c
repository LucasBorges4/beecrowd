#include <stdio.h>

int TAM_str(char str[]){
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int count_consoan_seguida(char str[]){
    int i = 0;
    int consoantes_seguidas = 0;
    while (str[i] != '\0') {
        char* vogais = "aeiouAEIOU";
        int consoantes = 0;
        int eh_consoante = 1;
        for (int j = 0; j < 10; j++) {
            if (str[i] == vogais[j]){
                eh_consoante = !eh_consoante;
                break;
            }
            if (eh_consoante) consoantes++;
            else consoantes = 0;
        }

        i++;
    }
    return consoantes_seguidas;
}

int main(void){
    char nome[42];
    scanf("%s", nome);
    printf("%d", count_consoan_seguida(nome));
    printf("\n");
    return 0;
}