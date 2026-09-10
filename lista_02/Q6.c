/*Construa um algoritmo que pergunte o preço de três produtos e informe qual produto você deve comprar; o critério de compra deve ser sempre o produto mais barato.
Entra: Valor dos três produtos.
Saída: Qual produto deve ser comprado.*/

#include <stdio.h>
int main(){
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a<b&&a<c){
        printf("Primeiro produto\n");
    }
    else if(b<a&&b<c){
        printf("Segundo produto\n");
    }
    else{
        printf("Terceiro produto\n");
    }

    return 0;
}
