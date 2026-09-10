/*Uma pesquisa realizada de graduação da disciplina de introdução à Lógica de Programação calculou a chance de aprovação a partir do cumprimento de atividades no The Huxley. Constatou-se que a chance de aprovação cresce conforme as atividades colocadas para os alunos semanalmente são cumpridas pelos mesmos. As faixas são apresentadas na tabela abaixo:
% de atividades cumpridas | chance de aprovação | conceito
[0,20] | 4,4%  | Pessimo
[20,40] | 31,65% | Ruim
[40,60] | 56,82% | Bom
[60,80] | 80,00% | Muito bom
[80,100] | 94,00% | Excelente
Escreva um programa que receba em uma mesma linha a quantidade de problemas passados pelo professor e a quantidade de questões resolvidas por um aluno. Em seguida, o programa deve calcular e imprimir na tela o percentual de atividades cumpridas juntamente com a chance de aprovação do aluno, ambos com 2 casas decimais, e o conceito, conforme regras da tabela acima.
Entrada: A entrada consiste de uma linha, contendo dois números inteiros separados por um espaço em branco. O primeiro representa a quantidade de problemas passados pelo professor, e o segundo, a quantidade resolvida pelo aluno.
Saída: A saída consiste de uma linha informando o percentual de atividades cumpridas, a chance de aprovação na disciplina (ambos com duas casas decimais e seguidos do símbolo %) e o conceito atribuído.
*/

#include <stdio.h>
int main(){
    int total, feito;
    double perc;
    scanf("%d %d", &total, &feito);

    perc=(100*(double)feito)/total;

    if(perc>=80 && perc<=100){
        printf("%.2lf%% 94.00%% Excelente\n", perc);
    }
    else if(perc>=60 && perc<80){
        printf("%.2lf%% 80.00%% Muito Bom\n", perc);
    }
    else if(perc>=40 && perc<60){
        printf("%.2lf%% 56.82%% Bom\n", perc);
    }
    else if(perc>=20 && perc<40){
        printf("%.2lf%% 31.65%% Ruim\n", perc);
    }
    else{
        printf("%.2lf%% 4.40%% Pessimo\n", perc);
    }

    return 0;
}
