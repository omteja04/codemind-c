#include<stdio.h>
#include<math.h>
void distance(int x1,int y1,int x2,int y2)
{
    float d,ds;
    ds=pow((x2-x1),2)+pow((y2-y1),2);
    d=sqrt(ds);
    printf("%.4f",d);
}
int main()
{
    int x1,y1,x2,y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    distance(x1,y1,x2,y2);
}