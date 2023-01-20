#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int l=(a>b)?b:a;
    int m=l;
    while(1)
    {
        if(l%a==0 && l%b==0)
        {
             printf("%d",l);
            break;
        }
        l+=m;
    }
}