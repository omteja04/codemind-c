#include<stdio.h>
#include<math.h>
bool prime(int n)
{
    int i;
    for(i=2;i<sqrt(n)+1;i++)
    {
        if (n%i==0)
        return false;
    }
    return true;
}
int main()
{
    int a,b,i,c=0;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(prime(i))
        {
            c++;
        }
    }
    printf("%d",c);
}