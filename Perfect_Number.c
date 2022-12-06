#include<stdio.h>
int main()
{
    int n,d,i,sum=0,old;
    scanf("%d",&n);
   for(i=1;i<n;i++)
   {
      if(n%i==0)
      sum=sum+i;
   }
    if(n==sum)
    printf("True");
    else
    printf("False");
    
}