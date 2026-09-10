/* Oguh quer chamar seus amigos para assistir um filme com ele mas está com medo de convidar e eles não aceitarem. Para lidar com esse problema ele pediu para você calcular a chance do convite dar certo baseado nos gostos deles.

As chances começam em 0% e aumentam ou diminuem de acordo com as informações do filme.



Gênero do filme

Ação aumenta a chance em 27.4%
Romance diminui a chance em 10.5%
Terror aumenta a chance em 19.7%


Dia do filme

Durante a semana diminui a chance em 41.3%
Durante o fim de semana aumenta a chance em 40.4%


Horário do filme
De manhã diminui a chance em 22.8%
De tarde aumenta a chance em 11.4%
De noite aumenta a chance em 38.6%


Amigos

Cada amigo convidado aumenta a chance em 2.3% */

int main(){
    int genero, dia, hora, convidados;
    double chance;
    scanf("%d%d%d%d", &genero, &dia, &hora, &convidados);
    chance = 0;

    switch(genero){
        case 1: chance += 27.4; break;
        case 2: chance -= 10.5; break;
        case 3: chance += 19.7; break;
    }

    if (dia == 1){
        chance = chance - 41.3;
    }
    else{
        chance = chance + 40.4;
    }

    switch(hora){
        case 1: chance = chance - 22.8; break;
        case 2: chance = chance + 11.4; break;
        case 3: chance = chance + 38.6; break;
    }

    chance += convidados * 2.3;

    if(chance <= 40){
        printf("Melhor nao tentar.\n");
    }
    else if(chance <= 80){
        printf("Chances boas, pode convidar.\n");
    }
    else{
        printf("Provavelmente vao aceitar.\n");
    }

    return 0;
}
