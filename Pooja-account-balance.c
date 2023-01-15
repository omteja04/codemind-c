
#include<stdio.h>
int main()
{
    int x;
    float y;
    scanf("%d %f",&x,&y);
    if(x%5==0)
    {
        printf("%.2f",y - x - 0.5);
    }
    else
    printf("%.2f",y);
}
