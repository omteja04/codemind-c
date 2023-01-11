#include<stdio.h>
int main()
{
    int k,tc;
    scanf("%d",&tc);
    for(k=1;k<=tc;k++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        if(x>y)
        printf("LOSS
");
        else if(x<y)
        printf("PROFIT
");
        else
        printf("NEUTRAL
");
    }
    
}