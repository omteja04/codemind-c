#include<stdio.h>
int main()
{
    char str[999];
    int l1=0,l2=0,l3=0,l4=0,i;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
         if(str[i]== 'a'|| str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
         l1++;
         else if(str[i]==' ')
         l2++;
         else if(str[i]>=48 && str[i]<=57 ) 
        l3++;
        else
        l4++;

    }
    printf("Vowels: %d
",l1);
    printf("Consonants: %d
",l4);
    printf("Digits: %d
",l3);
    printf("White spaces: %d
",l2);
}