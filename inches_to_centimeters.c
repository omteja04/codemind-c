#include<stdio.h>
void itom(int a)
{
    float cm;
    cm=2.54*a;
    printf("%.2f",cm);
}
int main()
{
    int a;
    scanf("%d",&a);
    itom(a);
}