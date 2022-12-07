#include<stdio.h>
int main()
{
    int a,b;
    float average;
    scanf("%d%d",&a,&b);
    average=(a+b)*0.5;
    printf("Average of %d and %d is: %0.2f",a,b,average);
}