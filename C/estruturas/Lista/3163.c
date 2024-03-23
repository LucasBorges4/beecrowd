//Beecrowd 3163 C Solution - Lista Encadeada
// Lucas Borges ;)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Aviao {
    char identificador[5]; // Armazena o identificador como uma string
    struct Aviao *prox;
} Aviao;

void adicionar_aviao(Aviao **inicio, char identificador[]) {
    Aviao *novo_aviao = (Aviao*) malloc(sizeof(Aviao));
    if (novo_aviao == NULL) {
        printf("Erro: memória insuficiente para criar um novo avião.\n");
        return;
    }

    strcpy(novo_aviao->identificador, identificador); // Copia o identificador para a estrutura
    novo_aviao->prox = NULL;

    if (*inicio == NULL) {
        *inicio = novo_aviao;

    } else {
        Aviao *temp = *inicio;
        while (temp->prox != NULL) {
            temp = temp->prox;
        }
        temp->prox = novo_aviao;
    }
}

void adicionar_sequencia_avioes_recursivo(Aviao **lista_temporaria, Aviao **leste, Aviao **norte, Aviao **sul, Aviao **oeste) {
    // Verifica se alguma das listas está vazia
    if (*leste == NULL && *norte == NULL && *sul == NULL && *oeste == NULL) {
        return; // Encerra a recursão se todas as listas estiverem vazias
    }

    // Adiciona o próximo avião de cada lista à lista temporária, se não estiver vazia
    if (*oeste != NULL) {
        adicionar_aviao(lista_temporaria, (*oeste)->identificador);
        *oeste = (*oeste)->prox;
    }
    if (*norte != NULL) {
        adicionar_aviao(lista_temporaria, (*norte)->identificador);
        *norte = (*norte)->prox;
    }
    if (*sul != NULL) {
        adicionar_aviao(lista_temporaria, (*sul)->identificador);
        *sul = (*sul)->prox;
    }
    if (*leste != NULL) {
        adicionar_aviao(lista_temporaria, (*leste)->identificador);
        *leste = (*leste)->prox;
    }

    // Chama recursivamente a função para continuar adicionando aviões
    adicionar_sequencia_avioes_recursivo(lista_temporaria, leste, norte, sul, oeste);
}



void imprimir_avioes(Aviao *inicio) {
    Aviao *temp = inicio;
    while (temp != NULL) {
        if (temp->prox == NULL) {
            printf("%s", temp->identificador);
            temp = temp->prox;
        }
        else {
        printf("%s ", temp->identificador);
        temp = temp->prox;
        }
    }
    printf("\n");
}

int main() {
    Aviao *leste = NULL, *norte = NULL, *sul = NULL, *oeste = NULL;
    Aviao *temp = NULL; // Ponteiro para percorrer a lista na ordem;

    int Cardeal;
    char identificador[5]; // String para armazenar o identificador

    while (scanf("%d", &Cardeal) != EOF && Cardeal != 0) {
        scanf("%s", identificador); // Lê o identificador como uma string

        switch (Cardeal) {
            case -4:
                adicionar_aviao(&leste, identificador);
                break;
            case -3:
                adicionar_aviao(&norte, identificador);
                break;
            case -2:
                adicionar_aviao(&sul, identificador);
                break;
            case -1:
                adicionar_aviao(&oeste, identificador);
                break;
            default:
                break;
        }
    }

    adicionar_sequencia_avioes_recursivo(&temp, &leste, &norte, &sul, &oeste);
    imprimir_avioes(temp);    

    return 0;
}



