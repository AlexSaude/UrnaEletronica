#include<stdio.h>

int global = 10;
main(){
    system ("color 13");

int a = 20;
int b = 30;
int c = 40;
int d = 50;
int e = 60;
char animal1 = 'c';
char animal2 = 'o';
char animal3 = 'e';
char animal4 = 'l';
char animal5 = 'h';
char animal6 = 'a';

printf("%d ", global);
printf("%d ", a);
printf("%d ", b);
printf("%d ", c);
printf("%d ", d);
printf("%d\a", e);
printf("\n%c",animal1);
printf("%c",animal2);
printf("%c",animal3);
printf("%c",animal4);
printf("%c",animal5);
printf("%c\n",animal6);

return 0;
}
