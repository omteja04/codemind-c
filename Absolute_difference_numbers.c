#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,p1,last,temp,first=0,rev=0,diff;
    scanf("%d %d",&n,&k);
    p1=pow(10,k);
    last=n%p1;
    while(n>0)
    {
        rev = rev*10 + n%10;
        n/=10;
    }
    temp= rev % p1;
    while(temp>0)
    {
       first = first*10 + temp%10;
        temp/=10;
    }
    diff= abs(last - first);
    printf("%d",diff);
}