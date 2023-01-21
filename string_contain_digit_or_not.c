#include<stdio.h>
int main()
{
    char str[1000],l1=0,i;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=48 && str[i]<=57 ) 
        l1++;
    }
    if(l1>0)
    printf("Contains %d digit",l1);
    else
    printf("Doesn't contain digit");
}