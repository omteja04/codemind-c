#include<stdio.h>
int main()
{
    int n;
    char c1,c2;
    scanf("%d",&n);
    for(c1=65;c1<=(64+n);c1++)
    {
        for(c2=65;c2<=(64+n);c2++)
        printf("%c ",c1);
        printf("
");
    }
    
}