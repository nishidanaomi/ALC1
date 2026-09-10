/*Faça um programa que dada uma idade, informe se a pessoa é adulta, adolescente ou criança:
idade maior ou igual a 18: adulto;
idade maior ou igual a 10 e menor que 18: adolescente;
idade maior ou igual a 0 e menor que 10: cfriança.*/

#include <stdio.h>

int main (){

    int idade;
    scanf("%d", &idade);

    if(idade>=0 && idade<10){
        printf("crianca\n");
    }
    else if(idade>=10 && idade<18){
        printf("adolescente\n");
    }
    else{
        printf("adulto\n");
    }

    return 0;
}
