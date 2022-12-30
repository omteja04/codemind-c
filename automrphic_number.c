#include<stdio.h>
#include<math.h>
int main()
{
    int n,sq,d,digi,rev=0,digii;
    scanf("%d",&n);
    digi=log10(n)+1;
    sq=n*n;
     printf("%d ",digi);
    while(sq)
    {
        
        d=sq%10;
        rev=rev*10+d;
        n=n/10;
        digii=log10(rev)+1;
        if(digii == digi)
        break;
        else
        continue;

        
    }
    printf("%d",digii);
    if(n==d)
    printf("yes");
    else
    printf("no");
}