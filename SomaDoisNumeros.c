#include<stdio.h>
resultado (int x, int y)
{
printf ("O resultado e: %d \n",x+y);
return 0;
}

int main()
{
    system("color 13");

    struct tm *ptr;
    time_t lt;
    lt = time(NULL);
    ptr = localtime(&lt);
    printf(asctime(ptr));
    printf("\n  \n");
char ch;
int x,y;
printf("Digite dois numeros: ");
scanf("%d%d",&x,&y);
resultado (x,y);
printf("Digite um caractere: ");
ch = getch();
printf("\n%c",ch);
}
