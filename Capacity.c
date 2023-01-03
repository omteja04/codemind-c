#include<stdio.h>
void capacity(int s,int t,int b)
{
    printf("%d KB",s*t*b);
}
int main()
{
    int s,t,b;
    scanf("%d%d%d",&s,&t,&b);
    capacity(s,t,b);
    
}