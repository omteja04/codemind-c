#include<stdio.h>
#include<math.h>
void weight(int x,int w1,int w2)
{
    int w3;
    w3=3*x-(w1+w2);
    printf("%d",w3);
}
int main()
{
    int x,w1,w2;
    scanf("%d%d%d",&x,&w1,&w2);
    weight(x,w1,w2);
    
}