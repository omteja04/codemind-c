#include<stdio.h>
int main()
{
    int r,c,i,j,sr=0,sc=0;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        if(i%2==0)
        sr+=a[i][j];
        else
        sc+=a[i][j];
    }
    printf("%d %d",sr,sc);
    
}