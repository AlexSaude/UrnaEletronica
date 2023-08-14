#include<stdio.h>

int main()
{
    system ("color 13");
int x,y,z;
x=y=10;
z=++x;
x=-x;
y++;
x=x+y-(z--);
printf("%d %d %d", x,y,z);

}
