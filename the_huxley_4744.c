/*
A fábrica de refrigerantes CG-Cola vende seu produto em três formatos: lata de 350 ml, garrafa de 600 ml e garrafa de 2 litros. Um comerciante pode comprar uma determinada quantidade de cada formato. Elabore um algoritmo para, depois de lidas as quantidades de cada formato, calcular quantos litros de refrigerante o comerciante comprou.
*/

#include <stdio.h>

int main() {
    int a, b, c;
    double total;

    scanf("%d %d %d", &a, &b, &c);

    total = a *0.35 + b * 0.6 + c * 2;

    printf("Foram comprados %.1lf litros de refrigerante.\n", total);

    return 0;
}
