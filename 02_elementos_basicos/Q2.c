/*
Construa um programa que receba como entrada a quantidade de votos (alcançados na pesquisa) de 3 candidatos e a  quantidade de votos nulos. O programa deverá imprimir a porcentagem de votos dos 3 candidatos e de votos nulos.
Entrada: Quatro números inteiros representando a quantidade de votos dos 3 candidatos e a quantidade de votos nulos.
Saída: A porcentagem dos votos.
Exemplo de entrada:
200
150
600
36
Exemplo de saída:
Candidato A: 20%
Candidato B: 15%
Candidato C: 60%
Nulos: 3%
*/

#include <stdio.h>

int main() {
    double c1, c2, c3, nulo, total;
    scanf("%lf %lf %lf %lf", &c1, &c2, &c3, &nulo);

    total = c1+c2+c3+nulo;
    c1 = (c1*100)/total;
    c2 = (c2*100)/total;
    c3 = (c3*100)/total;
    nulo = (nulo*100)/total;

    printf("Candidato A: %.0lf%%\n", c1);
    printf("Candidato B: %.0lf%%\n", c2);
    printf("Candidato C: %.0lf%%\n", c3);
    printf("Nulos: %.0lf%%\n", nulo);

    return 0;
}
