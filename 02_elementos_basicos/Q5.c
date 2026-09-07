/*
Elabore um programa que calcule três vezes a média entre dois números, utilizando a seguinte expressão: média = média de (média de ( média de A e B) e A) e A
Entrada: A entrada consiste de dois números inteiros A e B.
Saída: A média calculada com duas casas decimais.
*/

#include <stdio.h>
int main(){
    int A, B;
    double media;
    scanf("%d %d", &A, &B);

    media = (A+B)/2.0;
    media = (media+A)/2.0;
    media = (media+A)/2.0;

    printf("%.2lf", media);

    return 0;
}
