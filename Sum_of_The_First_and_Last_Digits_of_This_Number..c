#include<stdio.h>
int main()
{
    int tc,k,s=0;
    scanf("%d",&tc);
    for(k=1;k<=tc;k++)
    {
        int n,l,rev=0,f;
        scanf("%d",&n);
        l=n%10;
        while(n)
        {
            rev=rev*10 + n%10;
            n/=10;
        }
        f=rev%10;
        s=f+l;
        printf("%d
",s);
    }
    
}