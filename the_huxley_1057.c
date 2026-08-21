/*
Faça um programa que calcule o valor da hipotenusa de acordo com o teorema de pitágoras. Você não precisa se preocupar com casos em que os catetos fornecidos não podem formar um triângulo.

Pesquise como fazer a operação de raiz quadrada.

O valor de saída deve ser arredondado usando 2 casas decimais.
*/

#include <stdio.h>
#include <math.h>

int main(){
    double a, b, h;
    scanf("%lf %lf", &a, &b);

    h = sqrt(pow(a,2)+pow(b,2));

    printf("%.2lf\n", h);

    return 0;
}
