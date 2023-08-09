#include<stdio.h>
#include<math.h>
int reverse(int num)
{
    int rev=0,temp;
    temp=num;
    while(num)
    {
        rev=rev*10+num%10;
        num/=10;
    }
    return rev;
}
bool prime(int num)
{
    int i;
    for(i=2;i<sqrt(num)+1;i++)
    {
        if (num%i==0)
        return false;
    }
    return true;
}
int main()
{
    int n,rev;
    scanf("%d",&n);
    if(prime(n))
    {
        rev=reverse(n);
        if(prime(rev))
            printf("circular prime");
        else
            printf("prime but not a circular prime");
    }
    else
        printf("not prime");
}