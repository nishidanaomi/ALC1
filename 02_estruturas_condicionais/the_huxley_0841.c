/*Dados três números em ponto flutuante queremos saber quantos deles estão acima da média aritmética.*/

#include <stdio.h>
int main (){
    int qtd;
    double a, b, c, media;
    scanf("%lf%lf%lf", &a, &b, &c);
    qtd = 0;
    media = (a+b+c)/3;

    if (a>media){
        qtd++;
        }
    if (b>media) {
        qtd++;
    }
    if (c>media) {
        qtd++;
    }

    printf("%d\n", qtd);

    return 0;
}
