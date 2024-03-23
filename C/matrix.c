#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define ROWS 3
#define COLS 3
#define THREADS 3 // Número de threads

// Estrutura para os argumentos da thread
struct ThreadArgs {
    int **matriz1;
    int **matriz2;
    int **resultado;
    int inicio;
    int fim;
};

// Função de soma de matrizes para cada bloco
void *somaMatrizes(void *args) {
    struct ThreadArgs *threadArgs = (struct ThreadArgs *) args;

    for (int i = threadArgs->inicio; i < threadArgs->fim; i++) {
        for (int j = 0; j < COLS; j++) {
            threadArgs->resultado[i][j] = threadArgs->matriz1[i][j] + threadArgs->matriz2[i][j];
        }
    }

    pthread_exit(NULL);
}

int main(void){

    int matriz1[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matriz2[ROWS][COLS] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int resultado[ROWS][COLS];

    pthread_t threads[THREADS];
    struct ThreadArgs args[THREADS];

    int linhasPorThread = ROWS / THREADS;
    int linhaInicial = 0;
    for (int i = 0; i < THREADS; i++) {
        args[i].matriz1 = matriz1;
        args[i].matriz2 = matriz2;
        args[i].resultado = resultado;
        args[i].inicio = linhaInicial;
        args[i].fim = linhaInicial + linhasPorThread;

        // Criando a thread
        pthread_create(&threads[i], NULL, somaMatrizes, (void *)&args[i]);

        linhaInicial += linhasPorThread;
    }

    // Aguardando as threads terminarem
    for (int i = 0; i < THREADS; i++) {
        pthread_join(threads[i], NULL);
    }

    // Imprimindo a matriz resultante
    printf("Matriz Resultante:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }


    return 0;
}