#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n); 
    int l=n%10;     
    int d=log10(n)+1;
    int p=pow(10,(d-1));
    int f=n/p;  
    int swap1 = l*p+n%p;    
    int swap2 =swap1-l+f;   
    printf("%d",swap2);
    
}

/*
    123
    3
    3
    100
    1
    3*100+23=323
    323-3+1=321
*/