#include<stdio.h>
#include<math.h>
int main()
{
    int n,sq,d,digi,rev,p;
    scanf("%d",&n);
    digi=log10(n)+1;
    sq=n*n;
    p=pow(10,digi);
    rev=sq%p;
    if(n==rev)
    printf("Automorphic Number");
    else
    printf("Not an Automorphic Number");
}