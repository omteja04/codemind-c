#include<stdio.h>
int main()
{
    int r,c,i,j,a[1000][1000],s=0;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        s+=a[i][j];
    }
    printf("%d",s);
}