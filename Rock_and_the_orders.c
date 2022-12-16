#include<stdio.h>
int main()
{
    int d,c,a1,a2,a3,b1,b2,b3;
    scanf("%d %d
%d %d %d
%d %d %d",&d,&c,&a1,&a2,&a3,&b1,&b2,&b3);
    int a,b,twc,twoc;
    a=a1+a2+a3;
    b=b1+b2+b3;
    twc=a+b+c; //total with coupon
    twoc=a+b+d+d; //total without coupon
    if(a>=150 && b>=150)
    {
        if(twc<twoc)
        printf("YES");
        else
        printf("NO");
    }
    else if(a>=150 || b>=150)
    {   twc=a+b+c+d;
        if(twc<twoc)
        printf("YES");
        else
        printf("NO");
    }
    else
    printf("NO");
}