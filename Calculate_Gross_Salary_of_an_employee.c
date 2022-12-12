#include<stdio.h>
int main()
{
    float pf,bs,hra,da,ts;
    scanf("%f%f%f",&bs,&hra,&da);
    pf=0.12*bs;
    printf("%.2f
%.2f",pf,bs+pf+da+hra);
    
}