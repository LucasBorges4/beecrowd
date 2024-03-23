#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para representar um nó da árvore binária de busca.
// O valor do nó é armazenado em "valor".
// Os ponteiros para os filhos esquerdo e direito são armazenados em "esquerda" e "direita".
// O ponteiro para o pai é armazenado em "pai".
// O nó é criado com a função "criarNo" e a árvore é inserida com a função "inserir".
// A função "imprimirEmOrdem" imprime a árvore em ordem.
// A função "inserir" insere um novo nó na árvore.
// A função "criarNo" cria um novo nó.
// A função "imprimirEmOrdem" imprime a árvore em ordem.
// A função "inserir" insere um novo nó na

struct No {
    int valor;
    struct No* esquerda;
    struct No* direita;
};

typedef struct No* TipoArvore;
// Função para criar um novo nó
struct No* criarNo(int valor) {
    struct No* novoNo = (struct No*)malloc(sizeof(struct No));
    novoNo->valor = valor;
    novoNo->esquerda = NULL;
    novoNo->direita = NULL;
    return novoNo;
}

struct No* inserir(struct No* raiz, int valor) {
    if (raiz == NULL) {
        return criarNo(valor);
    }

    if (valor < raiz->valor) {
        raiz->esquerda = inserir(raiz->esquerda, valor);
    } else if (valor > raiz->valor) {
        raiz->direita = inserir(raiz->direita, valor);
    }

    return raiz;
}
/*  Prefixa: Você deve visitar a raiz, sub-árvore esquerda e sub-árvore direita.
    Infixa: Você deve visitar a sub-árvore esquerda, a raiz e a sub-árvore direita.
    Posfixa: Você deve visitar a sub-árvore esquerda, a sub-árvore direita e a raiz.
*/

void imprimirInfixa(struct No* raiz) { //infixa
    if (raiz != NULL) {
        imprimirInfixa(raiz->esquerda);
        printf("%d ", raiz->valor);
        imprimirInfixa(raiz->direita);
    }
}

void imprimirPrefixa(struct No* raiz) {
    if (raiz != NULL) {
        printf("%d ", raiz->valor);
        imprimirPrefixa(raiz->esquerda);
        imprimirPrefixa(raiz->direita);
    }
}

void imprimirPosfixa(struct No* raiz) {    
    if (raiz != NULL) {
        imprimirPosfixa(raiz->esquerda);
        imprimirPosfixa(raiz->direita);
        printf("%d ", raiz->valor);
    }

}


int main(void){
    TipoArvore raiz = NULL;
    int num_entradas;
    


    return 0;
}