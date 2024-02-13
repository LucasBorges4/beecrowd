#include <stdio.h>


int main(){
    int cases, multiplo2 = 0, multiplo3 = 0, multiplo4 = 0, multiplo5 = 0;
    scanf("%d", &cases);

    for (; cases--; ) {
        int num;
        scanf("%d", &num);
        if (num % 2 == 0) multiplo2++;
        if (num % 3 == 0) multiplo3++;
        if (num % 4 == 0) multiplo4++;
        if (num % 5 == 0) multiplo5++;
    }
    printf("%d Multiplo(s) de 2\n", multiplo2);
    printf("%d Multiplo(s) de 3\n", multiplo3);
    printf("%d Multiplo(s) de 4\n", multiplo4);
    printf("%d Multiplo(s) de 5\n", multiplo5);

    return 0;
}