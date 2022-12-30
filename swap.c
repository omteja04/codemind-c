#include<stdio.h>
int main()
{
    int a,b;
    printf("ENTER A:");
    scanf("%d",&a);
    printf("ENTER B:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n");
    printf("SWAP A & B\n");
    printf("\n");
    printf("A=%d\n",a);
    printf("B=%d",b);
    
}
