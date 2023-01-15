#include<stdio.h>
int main()
{
    int k,tc;
    scanf("%d",&tc);
    for(k=1;k<=tc;k++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        if((2*x) > (5*y))
        printf("Chocolate
");
        else if(2*x == 5*y)
        printf("Either
");
        else
        printf("Candy
");
    }
}