#include <string.h>
#include <stdio.h>

int main() {
    int x,y,n,s,tam;
    char p[51];
    scanf("%d",&n);
    for(x=0;x<n;x++){
        scanf("%s", p);
        scanf("%d", &s);
        for(y=0,tam=strlen(p);y<tam;y++){
            if(p[y]-s<65){
                p[y]=p[y]+26;
            }
            p[y]=p[y]-s;
            printf("%c", p[y]);
        }
        printf("\n");
    }
    return 0;
}