#include<stdio.h>
int main()
{
    int tc,k;
    scanf("%d",&tc);
    for(k=1;k<=tc;k++)
    {
        int a,b,i,c=0;
        scanf("%d %d",&a,&b);
        for(i=a;i<=b;i++)
        {
            if(i%10==2 || i%10==3 || i%10==9)
            c++;
        }
        printf("%d",c);
        printf("
");
    }
}