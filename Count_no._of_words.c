#include<stdio.h>
int main()
{
    char str[100],str1[100],l1=0,i,l2=0,l3=0;
    scanf("%[^
]s",&str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        l1++;
    }
    printf("%d",l1+1);
}