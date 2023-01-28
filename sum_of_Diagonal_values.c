#include<stdio.h>
int main()
{
    int r,c,arr[100][100],s1=0,s2=0,i,j;
    scanf("%d %d",&r,&c);
    for( i=0;i<r;i++)
    {
        for( j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for( i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            s1+=arr[i][j];
        }
    }
    j=r-1;
    for(i=0;i<r;i++)
    {
        if(i!=j)
        {
            s2+=arr[i][j];
        }
        j--;
        
    }
    printf("%d",s1+s2);
}