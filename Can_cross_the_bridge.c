#include<stdio.h>
void mangoes(int x,int y,int z)

{
    int a,b;
    a=z-y;
    b=a/x;
    printf("%d",b);
}
int main()
{
    int x,y,z,a,b;
    scanf("%d%d%d",&x,&y,&z);
    mangoes(x,y,z);
}