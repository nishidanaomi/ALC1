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
Candidato C: 61%
Nulos: 4%
*/

#include <stdio.h>

int main() {
    int c1, c2, c3, nulo, total;
    double p1, p2, p3, pnulo;

    scanf("%d %d %d %d", &c1, &c2, &c3, &nulo);

    total = c1+c2+c3+nulo;
    p1 = (c1*100.0)/total;
    p2 = (c2*100.0)/total;
    p3 = (c3*100.0)/total;
    pnulo = (nulo*100.0)/total;

    printf("Candidato A: %.0lf%%\n", p1);
    printf("Candidato B: %.0lf%%\n", p2);
    printf("Candidato C: %.0lf%%\n", p3);
    printf("Nulos: %.0lf%%\n", pnulo);

    return 0;
}
