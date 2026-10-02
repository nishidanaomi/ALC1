/*Faça um programa para retornar a quantidade de dias de um mês dado. Se o mês for fevereiro, deve-se verificar se o ano é bissexto e retornar a quantidade de dias correta.
Entrada: Dois números inteiros representando mês e ano.
Saida: Um número inteiro representando a quantidade de dias*/

#include <stdio.h>
int main(){
    int mes, ano, dias=0;
    scanf("%d %d", &mes, &ano);

    if(mes==2){
        if((ano%4==0 && ano%100!=0)||(ano%400==0)){
            dias=29;
        } else {
            dias=28;
        }
    } else if(mes==4||mes==6||mes==9||mes==11){
        dias=30;
    } else {
        dias=31;
    }
    printf("%d\n", dias);
    return 0;
}
