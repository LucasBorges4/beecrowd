#include <math.h>
#include <stdio.h>

int count_digits(char[]);
int count_exclamation(char[], int);
int number(char[], int);

int main(){
    char num[120];
    int cases;
    scanf("%d", &cases);

    while (cases--) {
        scanf("%s", num);
        int num_digits = count_digits(num);
        int num_exclamation = count_exclamation(num, num_digits);
        unsigned number_ = number(num, num_digits);
        long long result = 1;
        for (int i = number_; i >= 1; i -= num_exclamation) {
            result *= i;
        }
        printf("%llu\n", result);
    }

    return 0;
}

int count_digits(char num[]){
    int i = 0;
    while (num[i] != '!') {
        i++;
    }
    return i;
}

int count_exclamation(char num[], int start){
    int i = 0;
    while(num[start+i] != '\0'){
        i++;    
    }
    return i;
}

int number(char num[], int max){
    int sum = 0;
    for (int i = 0; i < max; i++) {
        int digito = num[i] - '0';
        digito *= pow(10, max - i - 1);
        sum += digito;
    }
    return sum;
}