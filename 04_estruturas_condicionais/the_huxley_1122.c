#include <stdio.h>
int main(){
    double media, freq;
    int aulas, faltas;
    scanf("%lf %d %d", &media, &aulas, &faltas);
    freq=(1-(double)faltas/aulas)*100;

    if((freq>=75&&media>=5)||(freq>=50&&media>=7)){
        printf("APROVADO\n");
    }
    else{
        printf("REPROVADO\n");
    }

    return 0;
}
