/*
Descrição (The Huxley - 1048)
Seu Furustreco é um patrão justo. Ele decidiu pagar para cada funcionário além de cada hora extra, um adicional de 10% sobre cada hora extra.
Para ajudar seu Furustreco, você deve fazer um programa que recebe o salário base do empregado e quantas horas extras ele fez naquele mês. Você deve imprimir na saída padrão o salário final do empregado.
Dica: Você deve usar o salário base para calcular quanto custa uma hora extra do empregado. Considerando que a carga horária mensal de uma pessoa é de 44 horas.
O valor de saída deve ser arredondado usando 2 casas decimais.
*/

#include <stdio.h>

int main(){
    double salario_base, hora_salario, salario_adicional, salario_final;
    int horas_extras;

    scanf("%lf", &salario_base);
    scanf("%d", &horas_extras);

    hora_salario = salario_base / 44;
    salario_adicional = hora_salario * horas_extras;
    salario_final = salario_base + salario_adicional + salario_adicional * 0.1;

    printf("%.2lf \n", salario_final);

    return 0;
}
