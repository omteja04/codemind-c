#include<stdio.h>
void check(int n)
{
    int r,c=0,d=0;
    while(n)
    {
        r=n%10;
        if(r%2==0)
        c++;
        d++;
        n/=10;
    }
    if(c==d)
        printf("Even");
        else if (c<d && c!=0)
        printf("Mixed");
        else printf("Odd");
}
int main()
{
    int n;
    scanf("%d",&n);
    check(n);
}