/*
Um intervalo de tempo pode ser dado em dias, horas, minutos, segundos ou sequências "decrescentes" destas unidades (em dias e horas; em horas e minutos; minutos e segundos), de acordo com o interesse de quem o está manipulando. Escreva um programa que converta um intervalo de tempo dado em segundos para horas, minutos e segundos.
*/

#include <stdio.h>

int main (){
    int A, B, C, N;

    scanf("%d", &N);
     A = N / 3600;
     N = N % 3600;
     B = N / 60;
     C = N % 60;

     printf("%d h %d m %d s\n", A, B, C);

     return 0;
}
