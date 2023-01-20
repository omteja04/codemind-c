#include<stdio.h>
int self(int n1)
{
    int n2,c=0,d=0,r;
    n2=n1;
    while(n1)
    {
        r=n1%10;
        if(r!=0 && n2%r==0)
        c++;
        d++;
        n1/=10;
    }
    if(c==d)
    return 1;
    else 
    return 0;
}
    int main()
{   
    int a,b,i;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(self(i))
    printf("%d ",i);
    }
}
