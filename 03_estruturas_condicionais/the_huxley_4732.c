#include <stdio.h>

int main(){
    int x, a, b, c, d, e, y, soma;
    scanf("%d%d%d%d%d%d", &x, &a, &b, &c, &d, &e);

    soma = a+b+c+d+e;

    if(x==soma){
        printf("Abastece perfeitamente.\n");
    }
    else if(x>soma){
        y = x-soma;
        printf("Abastece e sobra: %d.\n", y);
    }
    else {
        printf("Insuficiente.\n");
    }

    return 0;
}
