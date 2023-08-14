/*Jogo da Velha projeto iniciado dia 11 de junho de 2023
Arrumar
Jogo termina com erro, fecha programa.
jogada da máquina sobrepõe a do jogador
indicação vencedor não está completa
quando inicia tabuleiro o programa vê os zeros como vencedor


*/



#include<stdio.h>
#include<stdlib.h>

int matriz[4][4];
int a,b,x,y;


main()
{
system("color 13");
int cont;

for(cont=1;cont<9;++cont)
{
    jogador();

    tabuleiro();

    maquina();

    check();
}
getch();

}

tabuleiro(){
    int i,j;

 for(i=0;i<3;++i){
        for(j=0;j<3;++j){
                printf(" %d ",matriz[i][j]);
        }
        printf("\n");
}

}
maquina(){

    srand(time(NULL));
    a = (rand() %3);
    b = (rand() %3);
    matriz[a][b] = 1;

}


jogador(){
int x,y;
printf("\nDigite as coordenadas: ");
scanf("%i%i",&x,&y);
matriz[x][y] = 3;

    }

check(){
    int i;
    for(i=0;i<3;i++){
        if(matriz[i][0] == matriz[i][1] && matriz[i][0] == matriz[i][2])
            printf("Vencedor");
    }
    for(i=0;i<3;i++){
        if(matriz[0][i] == matriz[1][i] && matriz[0][i] == matriz[2][i])
            printf("Vencedor!!");
    }
}


