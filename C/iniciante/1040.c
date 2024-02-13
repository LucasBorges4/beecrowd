#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double media_provas(double p1, double p2, double p3, double p4){
    double media = (2*p1 + 3*p2 + 4*p3 + 1*p4)/10;
    printf("Media: %.1lf\n", media);
    return media;
}

char* resultado(double media){
    if (media >= 7.0) return "Aluno aprovado.";
    else if (media < 5.0) return "Aluno reprovado.";
    return "Aluno em exame.";
}

double media_final(double media_i, double media_f){
    double media =  (media_i + media_f)/2;
    return media;
}
char* resultado_exame(double media){
    if (media >= 5.0) return "Aluno aprovado.";
    return "Aluno reprovado.";
}

int main(void){
    char* aprovacao;
    double p1, p2, p3, p4;
    scanf("%lf %lf %lf %lf", &p1, &p2, &p3, &p4);
    double media = media_provas(p1, p2, p3, p4);
    aprovacao = resultado(media);
    if (!strcmp(aprovacao, "Aluno em exame.")) {
        double exame_final;
        printf("%s\n", aprovacao);
        printf("Nota do exame: ");
        scanf("%lf", &exame_final);
        printf("%.1lf\n", exame_final);
        media = media_final(media, exame_final);
        aprovacao = resultado_exame(media);
        printf("%s\n", aprovacao);
        printf("Media final: %.1lf\n", media);
        return 0;   
    }

    printf("%s\n", aprovacao);
    return 0;
}