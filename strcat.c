#include<stdio.h>
int main()
{
    char str[100],str1[100];
    scanf("%[^\n]s",&str);
    scanf(" %[^\n]s",&str1); // space should be used before %
    int i,length=0;
    
    for(i=0;str[i]!='\0';i++)
    {
        length++;
    }
    for(i=0;str[i]!='\0';i++)
    {
       str[length]=str1[i];
       length++;
    }
        str[length]='\0';
        printf("str= %s",str);
    
}
//strncat(s1,s2,no of character to concatenate)