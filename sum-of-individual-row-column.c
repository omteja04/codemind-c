#include<stdio.h>
int main()
{
    int a[100][100],r,c,sr,sc,i,j,cr=0,cc=0;
    printf("No Of Rows: \n");
    scanf("%d",&r);
    printf("\nNo Of COlumns: \n");
    scanf("%d",&c);
    printf("\n\nElements of matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
    printf("\n\n");
    printf("Matrix:\n\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        printf("%d\t",a[i][j]);
        printf("\n\n");
    }
    printf("\n\n");
    for(i=0;i<r;i++)
    {
        sr=sc=0;
        for(j=0;j<c;j++)
        {
            sr+=a[i][j];
            sc+=a[j][i];
        }
        printf("sum of row %d\t=\t%d\n\nsum of column %d\t=\t%d\n\n",++cr,sr,++cc,sc);
    }
}