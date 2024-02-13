#include <stdio.h>

int main(){
    int num_alunos;
    scanf("%d", &num_alunos);
    int vetor[101];
    for (int i = 0; i < 101; i++) {
        vetor[i] = 0;
    }
    for (int i = 0; i < num_alunos; i++) {
        int nota;
        scanf("%d", &nota);
        vetor[nota]++;
    }
    int max_pos, maior_vezes = vetor[0];

    for (int i = 0; i < 100; i++) {
        if (maior_vezes <= vetor[i+1]) {
            maior_vezes = vetor[i+1];
            max_pos = i+1;
        }
    }

    printf("%d\n", max_pos);

    return 0;
}