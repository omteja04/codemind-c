#include<stdio.h>
int main()
{
    int l,b,w,c,ar;
    int k;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    ar=2*w*(l+b+2*w);
    k=c*ar;
    printf("%d",k);
}