#include<stdio.h>
#define PI 3.14
int main()
{
   int r;
    scanf("%d",&r);
    float ar,per;
    ar=PI*r*r;
    per=2*PI*r;
    printf("%.2f
%.2f",ar,per);
}