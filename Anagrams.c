#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    int i,j,t,l=0,l1=0,flag=0;
    scanf("%[^
]s",s1);
    scanf(" %[^
]s",s2);
    for(i=0;s1[i]!=NULL;i++)
    {
        l++;
    }
    for(i=0;s1[i]!=NULL;i++)
    {
        l1++;
    }
    for(i=0;s1[i]!=NULL;i++)
    {
        if(s1[i]>='a' && s1[i]<='z')
        s1[i]=s1[i]-32;
    }
    for(i=0;s2[i]!=NULL;i++)
    {
        if(s2[i]>='a' && s2[i]<='z')
        s2[i]=s2[i]-32;
    }

    for(i=0;i<l;i++)
    {
        for(j=0;j<l-1-i;j++)
        {
            if(s1[j]>s1[j+1])
            {
                    t=s1[j];
                    s1[j]=s1[j+1];
                    s1[j+1]=t;
            }
        }
    }
    for(i=0;i<l1;i++)
    {
        for(j=0;j<l1-1-i;j++)
        {
            if(s2[j]>s2[j+1])
            {
                    t=s2[j];
                    s2[j]=s2[j+1];
                    s2[j+1]=t;
            }
        }
    }
    for(i=0;s1[i]!=NULL;i++)
    {
        if(s1[i]!=s2[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("True");
    else
        printf("False");
}