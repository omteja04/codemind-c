#include<stdio.h>
int fun(int n)//10
{
    int d,temp,c=0,cc=0;
	temp=n;//10
	while(n)
	{
		d=n%10;//0
		if(d==0)
		{
			return 0;
		}
		if(temp%d==0)
		{
			cc++;
		}
		c++;
		n=n/10;
	}
	if(c==cc)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
    int n1,n2,i;
    scanf("%d%d",&n1,&n2);
    for(i=n1;i<=n2;i++)//10
    {
        if(fun(i))//10
        {
            printf("%d ",i);
        }
    }
}