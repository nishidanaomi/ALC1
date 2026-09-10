#include <stdio.h>
int main(){
    int a, b, c, d, e, menor, opcao;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    menor=a;
    opcao=1;

    if(b<menor){
        menor=b;
        opcao=2;
    }
    if(c<menor){
        menor=c;
        opcao=3;
    }
    if(d<menor){
        menor=d;
        opcao=4;
    }
    if(e<menor){
        menor=e;
        opcao=5;
    }

    printf("Joãozinho escolheu a opção %d, com %d calorias\n", opcao, menor);

    return 0;
}
