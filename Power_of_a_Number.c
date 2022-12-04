#include<stdio.h>
#include<math.h>
int  main()
{
    int x,y,m,k,p;
    scanf("%d%d%d",&x,&y,&k);
    p=pow(x,y);
    m=p%k;
    printf("%d",m);
    
}