/*
Escreva um programa que recebe 3 notas de prova e calcula:

- A média delas

- A média ponderada delas, considerando pesos 2, 2 e 3

- A média ponderada delas, considerando pesos 1, 2 e 2
*/

#include <stdio.h>

int main() {

    double a, b, c, m1, m2, m3;

    scanf("%lf %lf %lf", &a, &b, &c);

    m1 = ( a + b + c ) / 3;
    m2 = ((2*a)+(2*b)+(3*c))/7;
    m3 = ( a + (2*b)+(2*c))/5;

    printf("%.2lf\n%.2lf\n%.2lf\n", m1, m2, m3);
	return 0;
}
