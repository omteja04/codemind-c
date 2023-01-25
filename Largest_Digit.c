#include<stdio.h>
int main()
{
	int i,n,d,max = -1;
	scanf("%d",&n);
	while(n>0)
	{
	d=n%10;
	if(max<d)
	max=d;
	n=n/10;
	}
	printf("%d",max);
}
