#include<stdio.h>
int main()
{
    int n,i,j,sum=0;
    scanf("%d",&n);
    while(sum !=1 && sum!=4)
    {
        sum=0;
        while(n)
        {
            j=n%10;
            sum+= j*j;
            n/=10;
        }
        n=sum;
    }
    if(sum==1 || sum==7)
    printf("True");
    else
    printf("False");
}