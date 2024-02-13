#include <stdio.h>
int Click_link_1(int click){
    return click * 4;
}

int main() {
    int cliques;
    scanf("%d", &cliques);
    printf("%d\n", Click_link_1(cliques));
    return 0;
}