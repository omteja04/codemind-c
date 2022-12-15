#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0,i,s1=0,s2=0;
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
	    if(i%2==0)
		s1=s1+a[i];
		else
		s2=s2+a[i];
	}
	sum=abs(s1-s2);
	printf("%d",sum);
}