/*Faça um programa que leia um digito e mostre a quantidade de leds necessários para exibi-lo num painel, de acordo com a configuração igual ao de um relógio digital de led.
Entrada: A entrada contém um inteiro N (0<=N<=9) que corresponde ao dígito.
Saída: Imprima o número de leds seguido da palavta "leds".*/


#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    switch(N){
        case 1: printf("2 leds\n");break;
        case 7: printf("3 leds\n");break;
        case 4: printf("4 leds\n");break;
        case 2:
        case 3:
        case 5: printf("5 leds\n");break;
        case 6:
        case 9:
        case 0: printf("6 leds\n");break;
        default: printf("7 leds\n");
    }

    return 0;
}
