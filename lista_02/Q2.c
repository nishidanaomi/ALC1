/*A Locadora de Veículos Eudora lançou uma grande promoção esse mês: pagando apenas R$90 por diária, o cliente pode alugar um carro de passeio. Para cada diária, o cliente recebe uma cota de quilometragem de 100Km. Cada quilômetro a mais custará uma taxa extra de R$12. Escreva um programa que receba como entrada a quantidade de dias e a quilometragem total rodada por um cliente dessa locadora e exiba o valor total a ser pago com duas casas decimais.*/

#include <stdio.h>

int main(){
    int dias, km;
    double valor;

    scanf("%d %d", &dias, &km);

    if(km<=dias*100){
        valor = 90.0*dias;
    }
    else{
        valor = (90.0*dias)+(12.0*(km-(dias*100)));
    }
    printf("%.2lf", valor);

    return 0;
}
