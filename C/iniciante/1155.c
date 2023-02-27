#include <math.h>
#include <stdio.h>
 
int main() {
    float sum = 0;
    for (int i = 1; i < 101; i++) {
        sum += 1.0/i;
    }
    printf("%.2f\n", sum); 
    return 0;
}