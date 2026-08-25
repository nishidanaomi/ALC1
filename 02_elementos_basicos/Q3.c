/*
Dado x, calcule o valor de y na expressão abaixo:
y = 3x³ - 2x² + 3x - 1
Entrada: Número inteiro (x)
Saída: O valor de y formatado com casa decimal.
*/

#include <stdio.h>
#include <math.h>

int main (){
    int x;
    double y;

    scanf("%d", &x);

    y = (3*pow(x,3))-(2*pow(x,2))+(3*x)-1;

    printf("Y = %.1lf\n", y);

    return 0;
}
