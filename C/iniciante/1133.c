#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);

    if (x > y){
        int temp = y;
        y = x;
        x = temp; 
    }

    int i = x + 1;
    while (i < y) {
        if (i % 5 == 2 || i% 5 == 3) printf("%d\n", i);
        i++;
    }

    return 0;
}