#include <stdio.h>

int main(){
    int a, b, c, aux;
    scanf("%d%d%d", &a, &b, &c);

    if(b<a){
        aux=b;
        b=a;
        a=aux;
    }
    if(c<a){
        aux=c;
        c=a;
        a=aux;
    }
    if(c<b){
        aux=c;
        c=b;
        b=aux;
    }

    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}
