#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    int l=0,i,temp,j,flag=0;
    scanf("%[^
]s",str1);
    for(i=0;str1[i]!=NULL;i++)
    {
        if(str1[i]>='a' && str1[i]<='z')
        str1[i]=str1[i]-32;
    }
    for(i=0;str1[i]!=NULL;i++)
    {
        str2[i]=str1[i];
        l++;
    }
    str2[l]=NULL;
    for(i=0,j=l-1;i<j;i++,j--)
    {
       temp=str1[i];
       str1[i]=str1[j];
       str1[j]=temp;
    }
    for(i=0;str1[i]!=NULL;i++)
    {
        if(str2[i]!=str1[i])
        flag=1;
    }
    if(flag==1)
    printf("False");
    else
    printf("True");
    
}