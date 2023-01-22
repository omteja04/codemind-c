#include<stdio.h>
int main()
{
	int i,n,d=0;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	if(n== i*(i+1))
	d++;
	}
	if(d>0)
	printf("YES");
	else
	printf("NO");
}
