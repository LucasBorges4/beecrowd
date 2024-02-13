#include <stdio.h>

void Particao(int Esq, int Dir, int *i, int *j, int *A) {
    int pivo, aux;
    *i = Esq; *j = Dir;
    pivo = A[(*i + *j)/2]; /* obtem o pivo x */
    do{
        while (pivo < A[*i]) (*i)++;
        while (pivo > A[*j]) (*j)--;
        if (*i <= *j){
        aux = A[*i]; A[*i] = A[*j]; A[*j] = aux;
        (*i)++; (*j)--;
        }

    } while (*i <= *j);
}
void Ordena(int Esq, int Dir, int* A){
    int i,j;
    Particao(Esq, Dir, &i, &j, A);
    if (Esq < j) Ordena(Esq, j, A);
    if (i < Dir) Ordena(i, Dir, A);
}

void QuickSort(int* A, int n){
    Ordena(0, n-1, A);
}

int main(){
    int num_habitantes, qtd_notas;
    while (scanf("%d %d", &num_habitantes, &qtd_notas) != EOF) {
        int vetor[101];
        for (int i = 0; i < num_habitantes; i++) scanf("%d", &(vetor[i]));
        QuickSort(vetor, qtd_notas);
        for (int i = 0; i < qtd_notas; i++) {
            int num;
            scanf("%d", &num);
            printf("%d\n", vetor[num-1]);
            }
    }

    return 0;
}