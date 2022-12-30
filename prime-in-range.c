#include<stdio.h>
int main()
{
    int a,b,j,c=0;
    scanf("%d %d",&a,&b);
    for(j=a;j<=b;j++)
    {  
	 int n=j,factor=0,i;

        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
            	factor++;
			}
		}
            if(factor==2)
            c++;
        
    }
     printf("%d",c);
}
