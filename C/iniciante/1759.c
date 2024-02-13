#include <stdio.h>
 
int main() {
    int num;
    scanf("%d", &num);

    for (int i = 0; i < num-1; i++) {
        printf("Ho ");
    }
    printf("Ho!\n");
 
    return 0;
}