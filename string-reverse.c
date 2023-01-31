#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l=0;
    char s[100];
    scanf("%[^\n]s",s);
    //printf("%s\n",strrev(s));
    for(i=0;s[i]!='\0';i++)
        l++;
    for(i=0,j=l-1;i<j;i++,j--)
    {   
        int temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    s[l]='\0';
    printf("%s",s);
}
 

 /*
    #include<stdio.h>
int main()
{
    char str[100],str1[100],len=0,i,temp=0,j;
    scanf("%[^\n]s",&str);
    for(i=0;str[i]!='\0';i++)
    len++;
    i=0,j=len-1;
    while(i<j)
    {
        temp=str[j];
        str[j]=str[i];
        str[i]=temp;
        i++;
        j--;
    }
    printf("%s",str);
}




#include<stdio.h>
int main()
{
    int i,j,l=0;
    char s[100];
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++)
        l++;
    for(i=0;i<l/2;i++)
    {   
        int temp=s[i];
        s[i]=s[l-1-i];
        s[l-1-i]=temp;
    } 
    printf("%s",s);
}



 */
