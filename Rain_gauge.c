#include<stdio.h>
int main()
{
    int tc,k;
    scanf("%d",&tc);
    for(k=1;k<=tc;k++)
    {
        int r;
        scanf("%d",&r);
        if(r<3)
        printf("LIGHT
");
        else if(r<7)
        printf("MODERATE
");
        else
        printf("HEAVY
");
    }
}