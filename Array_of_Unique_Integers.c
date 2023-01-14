#include<stdio.h>
int main()
{
    int n,temp;
    float avg;
    scanf("%d",&n);
    int s[n],i,j,sum=0;
    for(i=0;i<n;i++)
    scanf("%d",&s[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(s[j]>s[j+1])
            {
                    temp=s[j];
                    s[j]=s[j+1];
                    s[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        sum+=s[i];
    }
  
        

    sum= sum-s[0]-s[n-1];
      n-=2;
    avg=(float)sum/n;
    printf("%.5f",avg);
    
}