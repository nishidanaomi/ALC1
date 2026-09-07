#include <stdio.h>

int main(){
    int x, y, aux;
    scanf("%d%d" ,&x, &y);

    if(y<x){
        aux=y;
        y=x;
        x=aux;
    }

    printf("%d\n%d\n", x, y);

    return 0;
}
