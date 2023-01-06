#include<stdio.h>
int main()
{
    int n,r,i,n1,s=0;
    scanf("%d",&n);
    n1=n;
    while(n)
    {
       int f=1;
        r=n%10;
        for(i=1;i<=r;i++)
        {
            f*=i;
        }
        s+=f;
        n/=10;

    }
    if(n1==s)
    printf("The number %d is a strong number",n1);
    else
    printf("The number %d is not a strong number",n1);
}