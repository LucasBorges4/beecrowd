#include <math.h>
#include <stdio.h>
 
int main() {
    float sum = 0;
    for (int i = 0; i < 19; i++) {
        sum += (2*(i) + 1)/(pow(2, i));
    }
    printf("%.2f\n", sum); 
    return 0;
}