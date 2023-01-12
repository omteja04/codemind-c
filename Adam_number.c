#include<stdio.h>
int main()
{
    int n1,d1,sum1=0,sq1,n2,d2,sum2=0,sq3,sq2;
    scanf("%d",&n1),
    sq1=n1*n1;
    while(n1)
    {
        d1=n1%10;
        n1=n1/10;
        sum1=sum1*10+d1;
    }
    n2=sum1;
    sq2=n2*n2;
    while(sq2)
    {
      d2=sq2%10;
      sq2=sq2/10;
      sum2=sum2*10+d2;
    }
    sq3=sum2;
    if(sq3==sq1)
    printf("True");
    else
    printf("False");
    return 0;
}