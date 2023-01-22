#include<stdio.h>
int main()
{
	int i,n,d,rev=0;
	scanf("%d",&n);
	while(n)
	{
	d=n%10;
	rev=rev*10+d;
	n=n/10;
	}
	printf("%d",rev);
}
