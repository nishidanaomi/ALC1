/*
Durante a impressão de um conjunto de páginas, o software da impressora mostrou a mensagem:

“Imprimindo…

75 páginas impressas (12,5% completo) “



Doyoon não lembrava mais quantas páginas tinha o documento dele e, portanto, quantas ainda faltavam ser impressas e gostaria de um programa que respondesse isso para ele. Desenvolva uma solução para resolver o problema de Doyoon.
*/

#include <stdio.h>

int main (){
    int a, x, y;
    double b;

    scanf("%d %lf", &a, &b);

    x = (a*100)/b;
    y = x - a;

    printf("O documento possui %d paginas\nJá foram impressas %d paginas\nFaltam %d paginas\n", x, a, y);

    return 0;
}
