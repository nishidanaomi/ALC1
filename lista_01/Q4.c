/*
Uma adminstradora de cartões está oferecendo uma promoção aos seus clientes. A pessoa que não puder pagar o total da fatura no mês de março poderá ágar apenas 50% do valor, e o restante poderá ser pago no mês seguinte com juros de 6,5%.
Deselvolva uma solução para ajudar o cliente a descobrir qual será o valor de sua fatura no mês de abril caso ele aceite a proposta.
Entrada: Um número real, correspondente ao valor total da fatura.
Saída: O valor total da fatura, valor a pagar em março e o valor a pagar em abril, formatados com duas casas decimais.
*/

#include <stdio.h>

int main(){
    double total, marco, abril;
    scanf ("%lf", &total);

    marco = total * 0.5;
    abril = marco * 1.065;

    printf("Valor total da fatura: R$ %.2lf\n", total);
    printf("Valor a pagar em Marco: R$ %.2lf\n", marco);
    printf("Valor a pagar em Abril: R$ %.2lf\n", abril);

    return 0;
}
