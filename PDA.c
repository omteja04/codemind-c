#include<stdio.h>
void perfect(int n)
{
    int i,fac=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        fac=fac+i;
    }
    if(fac==n)
    printf("PERFECT");
}

void abundant(int n)
{
    int fac=0,i;
    for(i=1;i<n;i++)
    if(n%i==0)
    fac=fac+i;
    if(fac>n)
    printf("ABUNDANT");
}
void deficient(int n)
{
    int fac=0,i;
    for(i=1;i<n;i++)
    if(n%i==0)
    fac=fac+i;
    if(fac<n)
    printf("DEFICIENT");
}
int main()
{
    int n;
    scanf("%d",&n);
    abundant(n);
    perfect(n);
    deficient(n);
}