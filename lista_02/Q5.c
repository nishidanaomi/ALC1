/*Este mês ocorre o Mundial Tiro ao Alvo e as competições ocorrem em duas etapas. Para se classificar para a segunda etapa, cada competidor precisa somar pelo menos 100 pontos ao longo de 6 partidas. Escreva um programa que receba como entrada os pontos feitos por um competidor em cada uma das partidas da primeira etapa, e exiba uma mensagem informando se ele foi classificado ou não.
Entrada: Seis números inteiros, cada um representando a pontuação do jogador em uma partida.
Saída: Uma  mensagem (Classificado ou Eliminado), de acordo com a pontuação total do competidor.*/

#include <stdio.h>
int main(){
    int p1, p2, p3, p4, p5, p6, total;
    scanf("%d %d %d %d %d %d", &p1, &p2, &p3, &p4, &p5, &p6);

    total = p1+p2+p3+p4+p5+p6;

    if(total>=100){
        printf("Classificado\n");
    }
    else {
        printf("Eliminado\n");
    }

    return 0;
}
