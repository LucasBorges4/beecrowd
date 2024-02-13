#include <stdio.h>
#include <string.h>
int main(void){
    char tipagem_animalesca_1[20], tipagem_animalesca_2[20], tipagem_animalesca_3[20];
    scanf("%s %s %s", tipagem_animalesca_1, tipagem_animalesca_2, tipagem_animalesca_3);

    if (strcmp(tipagem_animalesca_1, "vertebrado") == 0) {
        
        if (strcmp(tipagem_animalesca_2, "ave") == 0) {
            if (strcmp(tipagem_animalesca_3, "carnivoro") == 0){
                printf("aguia\n");
            }
            else if (strcmp(tipagem_animalesca_3, "onivoro") == 0) {
                printf("pomba\n");
            }
        }

        else if (strcmp(tipagem_animalesca_2, "mamifero") == 0) {
            if (strcmp(tipagem_animalesca_3, "onivoro") == 0) {
                printf("homem\n");
            }
            
            else if (strcmp(tipagem_animalesca_3, "herbivoro") == 0) {
                printf("vaca\n");
            }
        }
    }

    if (strcmp(tipagem_animalesca_1, "invertebrado") == 0) {

        if (strcmp(tipagem_animalesca_2, "inseto") == 0) {
            if (strcmp(tipagem_animalesca_3, "hematofago") == 0){
                printf("pulga\n");
            }
            else if (strcmp(tipagem_animalesca_3, "herbivoro") == 0) {
                printf("lagarta\n");
            }
        }

        else if (strcmp(tipagem_animalesca_2, "anelideo") == 0) {
            if (strcmp(tipagem_animalesca_3, "hematofago") == 0) {
                printf("sanguessuga\n");
            }
            
            else if (strcmp(tipagem_animalesca_3, "onivoro") == 0) {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}