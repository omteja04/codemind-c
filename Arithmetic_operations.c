#include<stdio.h>
void operations(int a,int b)
{
    int s,d,p,q,r;
    s=a+b;
    d=a-b;
    p=a*b;
    q=a/b;
    r=a%b;
    printf("Sum:%d
Difference:%d
Product:%d
Quotient:%d
Remainder:%d",s,d,p,q,r);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    operations(a,b);
}