#include<stdio.h>
int main()
{
    int n,c=0,arr[1000],f=0;
    scanf("%d",&n);
    int m=n;
    while(n)
    {
        int r=n%10;
        arr[c]=r;
        n/=10;
        c++;
    }
    int i,j;
    for(i=0;i<c;i++)
    {
        for(j=0;j<c;j++)
        if(arr[i]==arr[j])
        f++;
    }
    if(f==c)
    printf("Unique Number");
    else
    printf("Not Unique Number");
}