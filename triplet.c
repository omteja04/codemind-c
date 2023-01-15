#include<stdio.h>
int main()
{
    int tc,k;
    scanf("%d",&tc);
    for(k=1;k<=tc;k++)
    {
        int a[3],i,j,temp;
        for(i=0;i<3;i++)
        scanf("%d",&a[i]);
        for(i=0;i<3;i++)
        {
            for(j=0;j<3-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        printf("%d\n",a[1]);
    }
}
