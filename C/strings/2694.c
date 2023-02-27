#include <stdio.h>


int main(void){

    int cases;
    scanf("%d", &cases);
    char string[14];

    while (cases--) {
        scanf("%s", string);
        int digito = string[2] - '0';
        digito*=10;
        int digito2 = string[3] - '0';
        int digito3 = string[5] - '0';
        digito3*= 10*10;
        int digito4 = string[6] - '0';
        digito4*=10;
        int digito5 = string[7] - '0';
        int digito6 = string[11] - '0';
        digito6*=10;
        int digito7 = string[12] - '0';
        digito+=digito2+digito3+digito4+digito5+digito6+digito7;
        printf("%d\n", digito);
    }

    return 0;
}