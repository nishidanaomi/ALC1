/*
O cardápio de uma lanchonete é dado abaixo. Prepare um algoritmo que leia a quantidade de cada item que você consumiu e calcule a conta final.

Hambúrguer................. R$ 3,00
Cheeseburger .............. R$ 2,50
Fritas............................ R$ 2,50
Refrigerante ................. R$ 1,00
Milkshake..................... R$ 3,00
*/

#include <stdio.h>

int main (){
    int a, b, c, d, e;
    double total;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    total = (a*3 + b*2.5 + c*2.5 + d + e*3);

    printf("Conta final: %.2lf\n", total);

    return 0;
}
