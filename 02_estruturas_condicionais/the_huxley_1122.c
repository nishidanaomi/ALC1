/* Escreva um programa que a partir da média, do número de aulas e faltas do aluno, defina seu resultado na disciplina. Os resultados possíveis são: APROVADO e REPROVADO. Para ser considerado APROVADO, o aluno precisa se enquadrar em uma das seguintes situações:

a) Frequência maior ou igual 75% com média maior ou igual a 5;

b) Frequência maior ou igual a 50% caso a média seja maior ou igual a 7.

Caso não se enquadre em pelo menos uma delas, é considerado REPROVADO. */

#include <stdio.h>
int main(){
    double media, freq;
    int aulas, faltas;
    scanf("%lf%d%d", &media, &aulas, &faltas);

    freq = (1-(double)faltas/aulas)*100;

    if((freq < 75 || media < 5) && (freq < 50 || media < 7)) {
        printf("REPROVADO");
    }
    else{
        printf("APROVADO");
    }

    return 0;
}
