#include <stdio.h>

int main(){
    float salario, temp, temp2, temp3;
    scanf("%f", &salario);
    if (salario <= 2000.00) printf("Isento\n");
    else if(salario <= 3000.00){
        temp = salario - 2000;
        temp *= 0.08;
        printf("R$ %.2f\n", temp);
    }
    else if(salario <= 4500.00){
        temp = salario - 3000;
        temp2 = salario - 2000 - temp;
        
        temp2 *= 0.08,  temp *= 0.18;
        
        temp2 += temp;
        
        printf("R$ %.2f\n", temp2);
    }
    else {
        temp = salario - 4500;
        temp2 = salario - 3000 - temp;
        temp3 = salario - 2000 - temp2 - temp;
        
        temp3*=0.08, temp2*=0.18, temp*=0.28;

        temp += temp2;
        temp += temp3;

        printf("R$ %.2f\n", temp);
    }
    return 0;
}