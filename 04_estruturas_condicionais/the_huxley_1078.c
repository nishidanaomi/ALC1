#include <stdio.h>

int main () {
    int a, b, c;
    double media;
    scanf("%d %d %d", &a, &b, &c);

    media = (a+b+c)/3.0;

    if (media < 0 || media > 100 ){
        printf ("Media invalida\n");
        }
        else {
            printf("A media do aluno foi %.2lf e ele foi ", media);

            if (media <= 40){
                printf("REPROVADO\n");
            }
            else if(media < 70){
                printf("FINAL\n");
            }
            else{
                printf("APROVADO\n");
            }
        }
}
