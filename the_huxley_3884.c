/*
Escreva um programa que gera o invertido de um número com três algarismos.

OBS: não é permitido usar funções nativas do python, estruturas de seleção , repetição ou variáveis compostas.
*/

#include <stdio.h>

int main(){

    int u, aux, d, c, x, y;

    scanf("%d", &x);

    u = x % 10;
    aux = x / 10;
    d = aux % 10;
    c = aux / 10;
    y = u*100 + d*10 + c;

    printf("%d\n", y);

    return 0;
}
