#include<stdio.h>
int main()
{
    int tc,k;
    scanf("%d",&tc);
    for(k=1;k<=tc;k++)
    {
        int x,y,a;
        scanf("%d %d %d",&x,&y,&a);
        if(x<=a && a<y)
        printf("YES
");
        else
        printf("NO
");
    }
}