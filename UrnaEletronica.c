/* By Alex Saúde
   1º periodo - Engenharia da Computação
   Prof. Raquel Fialho */


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    unsigned int opcao,voto,branco=0,nulo=0;
    int aecio=0,dilma=0,marina=0,luciana=0,pastor=0,eduardo=0,levy=0,ze=0,eymael=0,mauro=0,rui = 0;
    short int a,d,m,l,p,e,lv,z,ey,mr,r,nul,br;
system("color 13");
struct tm *ptr;
time_t lt;
lt = time(NULL);
ptr = localtime(&lt);
printf(asctime(ptr));
printf("\n  \n");
do{
printf("***************************\n");
printf(" Opcoes da urna Eletronica\n");
printf("***************************\n\n");
printf("1- Iniciar votacao\n");
printf("2- Apresentar resultado da votacao\n");
printf("3- Sair\n\n");
scanf("%i",&opcao);

switch (opcao)
{
    case 1:
    printf("=======================================\n");
    printf("Escolha o codigo referente a sua opcao: \n");
    printf("=======================================\n\n\n");
    printf("CODIGO      ");
    printf("CANDIDATO\n");
    printf("  45        ");
    printf("Aecio Neves\n");
    printf("  13        ");
    printf("Dilma Roussef\n");
    printf("  40        ");
    printf("Marina Silva\n");
    printf("  50        ");
    printf("Luciana Genro\n");
    printf("  20        ");
    printf("Pastor Everaldo\n");
    printf("  43        ");
    printf("Eduardo Jorge\n");
    printf("  28        ");
    printf("Levy Fidelix\n");
    printf("  16        ");
    printf("Ze Maria\n");
    printf("  27        ");
    printf("Eymael\n");
    printf("  21        ");
    printf("Mauro Lasi\n");
    printf("  29        ");
    printf("Rui Costa Pimenta\n");
    printf("  0        ");
    printf(" Voto nulo\n");
    printf("  1        ");
    printf(" Voto em branco\n");
    scanf("%i",&voto);


    if (voto == 45)
    {
        printf("Aecio Neves\n");
        printf("Numero: 45\n");
        printf("Nome para urna: Aecio Neves\n");
        printf("Cargo a que concorre: Presidente\n");
        printf("Partido: Partido da Social Democracia Brasileira\n");
        printf("Coligacao: MUDA BRASIL (PSDB/PMN/SD/DEM/PEN/PTN/PTB/PTC/PT do B)\n");
        printf("Vice presidente:Aloysio Nunes Ferreira\n");
        printf("Confirme votacao: (Sim = 1/Nao = 2)\n");
        scanf("%i",&a);
        if (a == 1)
            aecio ++;
            printf("\a");
        break;
    }
    else if (voto == 13)
    {
       printf("Numero: 13\n");
       printf("Nome para urna: Dilma\n");
       printf("Cargo a que concorre: Presidente\n");
       printf("Partido: Partido dos Trabalhadores\n");
       printf("Coligacao:COLIGACAO COM A FORCA DO POVO(PT/PMDB/PSD/PP/PR/PROS/PDT/PC do B/PRB)\n");
       printf("Vice presidente: Michel Temer\n");
       printf("Confirme votacao: (Sim = 1/Nao = 2)\n");
       scanf("%i",&d);
        if (d == 1)
            dilma ++;
            printf("\a");
       break;
    }
        else if (voto == 40)
        {
        printf("Numero: 40\n");
        printf("Nome para urna: Marina Silva\n");
        printf("Cargo a que concorre: Presidente\n");
        printf("Partido: Partido Socialista Brasileiro\n");
        printf("Coligacao: UNIDOS PELO BRASIL (PHS/PRP/PPS/PPL/PSB/PSL)\n");
        printf("Vice presidente: Beto Albuquerque\n");
        printf("Confirme votacao: (Sim = 1/Nao = 2)\n");
        scanf("%i",&m);
        if (m == 1)
            marina ++;
            printf("\a");
        break;
        }

    else if (voto == 50)
    {
        printf("Numero: 50\n");
        printf("Nome para urna: Luciana Genro\n");
        printf("Cargo a que concorre: Presidente\n");
        printf("Partido: Partido Socialismo e Libertade\n");
        printf("Coligacao: PSOL\n");
        printf("Vice presidente: Jorge Paz\n");
        printf("Confirme votacao: (Sim = 1/Nao = 2)\n");
        scanf("%i",&l);
        if (l == 1)
            luciana ++;
            printf("\a");
        break;
    }
        else if (voto == 20)
        {
        printf("Numero: 20\n");
        printf("Nome para urna: Pastor Everaldo\n");
        printf("Cargo a que concorre: Presidente\n");
        printf("Partido: Partido Social Cristao\n");
        printf("Coligacao: PSC\n");
        printf("Vice presidente: Leonardo Gadelha\n");
        printf("Confirme votacao: (Sim = 1/Nao = 2)\n");
        scanf("%i",&p);
        if (p == 1)
            pastor ++;
            printf("\a");
        break;
        }
        else if(voto == 43)
        {
        printf("Numero: 43\n");
        printf("Nome para urna: Eduardo Jorge\n");
        printf("Cargo a que concorre: Presidente\n");
        printf("Partido: Partido Verde\n");
        printf("Coligacao: PV\n");
        printf("Vice presidente: Celia Sacramento\n");
        printf("Confirme votacao: (Sim = 1/Nao = 2)\n");
        scanf("%i",&e);
        if (e == 1)
            eduardo ++;
            printf("\a");
        break;
        }
        else if (voto == 28)
        {
        printf("Numero: 28\n");
        printf("Nome para urna: Levy Fidelix\n");
        printf("Cargo a que concorre: Presidente\n");
        printf("Partido: Partido Renovador Trabalhista Brasileiro\n");
        printf("Coligacao: PRTB\n");
        printf("Vice presidente: Cel.Jose Alves\n");
        printf("Confirme votacao: (Sim = 1/Nao = 2)\n");
        scanf("%i",&lv);
        if (lv == 1)
            levy ++;
            printf("\a");
        break;
        }
        else if (voto == 16)
        {
        printf("Numero: 16\n");
        printf("Nome para urna: Ze Maria\n");
        printf("Cargo a que concorre: Presidente\n");
        printf("Partido: Partido Socialista dos Trabalhadores Unificado\n");
        printf("Coligacao: PSTU\n");
        printf("Vice presidente: Claudia Durans \n");
        printf("Confirme votacao: (Sim = 1/Nao = 2)\n");
        scanf("%i",&z);
        if (z == 1)
            ze ++;
            printf("\a");
        break;
        }
        else if(voto == 27)
        {
        printf("Numero: 27\n");
        printf("Nome para urna: Eymael\n");
        printf("Cargo a que concorre: Presidente\n");
        printf("Partido: Partido Social Democrata Cristao\n");
        printf("Coligacao: PSDC\n");
        printf("Vice presidente: Roberto Lopes\n");
        printf("Confirme votacao: (Sim = 1/Nao = 2)\n");
        scanf("%i",&ey);
        if (ey == 1)
            eymael ++;
            printf("\a");
        break;
        }
        else if (voto == 21)
        {
        printf("Numero: 21\n");
        printf("Nome para urna: Mauro Lasi\n");
        printf("Cargo a que concorre: Presidente\n");
        printf("Partido: Partido Comunista Brasileiro\n");
        printf("Coligacao: PCB\n");
        printf("Vice presidente: Sofia Manzano\n");
        printf("Confirme votacao: (Sim = 1/Nao = 2)\n");
        scanf("%i",&mr);
        if (mr == 1)
            mauro ++;
            printf("\a");
        break;
        }
        else if(voto == 29)
        {
        printf("Numero: 29\n");
        printf("Nome para urna: Rui Costa Pimenta\n");
        printf("Cargo a que concorre: Presidente\n");
        printf("Partido: Partido da Causa Operaria\n");
        printf("Coligacao: PCO\n");
        printf("Vice presidente: Ricardo Machado\n");
        printf("Confirme votacao: (Sim = 1/Nao = 2)\n");
        scanf("%i",&r);
        if (r == 1)
            rui ++;
            printf("\a");
        break;
        }
        else if (voto == 0)
        {
            printf("Anular voto:\n");
            printf("Confirme sua escolha: (Sim = 1/Nao = 2)\n");
            scanf("%i",&nul);
            if (nul == 1)
                nulo ++;
                printf("\a");
            break;
        }
        else if (voto == 1)
        {
            printf("Voto em branco\n");
            printf("Confirme sua escolha: (Sim = 1/Nao = 2)\n");
            scanf("%i",&br);
            if (br == 1)
                branco ++;
                printf("\a");
            break;
        }
case 2:
    printf("Votos nulos:       %i votos\n",nulo);
    printf("Votos em branco:   %i votos\n",branco);
    printf("Aecio Neves:       %i votos\n",aecio);
    printf("Dilma:             %i votos\n",dilma);
    printf("Marina Silva:      %i votos\n",marina);
    printf("Luciana Genro:     %i votos\n",luciana);
    printf("Pastor Everaldo:   %i votos\n",pastor);
    printf("Eduardo Jorge:     %i votos\n",eduardo);
    printf("Levy Fidelix:      %i votos\n",levy);
    printf("Ze Maria:          %i votos\n",ze);
    printf("Eymael:            %i votos\n",eymael);
    printf("Mauro Lasi:        %i votos\n",mauro);
    printf("Rui Costa Pimenta: %i votos\n\n\n",rui);
    break;
default:
    break;

}
}while (opcao <= 2);


system("pause");
return 0;
}
