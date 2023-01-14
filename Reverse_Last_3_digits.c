#include<stdio.h>
int main()
{
    int n,q,d=0,rev=0,r;
    scanf("%d",&n);
    q=n;
    int l=n%1000;
    while(n)
    {
        r=n%10;
        rev=rev*10+r;
        d++;
        n/=10;
        if(d==3)
        break;
    }
     int New = q-l+rev;
     printf("%d",New);
}

/*
    123456
    l=456
    r=6,5,4 //d=3 break
    rev=654
    123456-456+654
*/