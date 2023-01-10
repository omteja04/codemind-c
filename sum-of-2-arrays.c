#include<stdio.h>
int main()
{
    int a[5],b[5],sum[5],i;
    printf("Elements of 1st array\n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
         printf("Elements of 2nd array\n");
    for(i=0;i<5;i++)
        scanf("%d",&b[i]);
    for(i=0;i<5;i++)
        {
            sum[i]=a[i]+b[i];
        }
        printf("Sum of the elements of 1st & 2nd array\n");
    for(i=0;i<5;i++)
        {
            printf("%d ----- %d \n",i,sum[i]);
        }
}
