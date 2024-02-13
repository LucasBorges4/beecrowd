#include <stdio.h>


int main(void){
    int num;
    scanf("%d", &num);
    int i = 0;
    int h, m, lock;
    while (i < num) {
        scanf("%d %d %d", &h, &m, &lock);
        if (lock) printf("%02d:%02d - A porta abriu!\n", h, m);
        else printf("%02d:%02d - A porta fechou!\n", h, m);
        i++;
    }
    
    return 0;
}