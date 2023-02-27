#include <stdio.h>

int soma(int *a, int* b);

int main(void) {    
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", soma(&a, &b));
    return 0;
}

int soma(int *a, int *b){
    int somatotal = 0;
    if (*a < *b){
        for(int i = *a + 1; i < *b; i++){
            if(i%2 == 1 || i%2 == -1){somatotal+= i;}        
        }

        return somatotal;
    }
    else if (*b < *a){
        for(int i = *b + 1; i < *a; i++){
            if(i%2 == 1 || i%2 == -1){somatotal+= i;}
        }
        return somatotal;
    }
    else{
        return 0;
    }

}