#include <stdio.h>
#include<math.h>
int main()
{
   int r,c,i,j, first[10][10], second[10][10], sum[10][10];
   scanf("%d", &r);
   for(i=0;i<r;i++)
   {
      for(j=0;j<r;j++)
      scanf("%d",&first[i][j]);
   }
 
   for(i=0;i<r;i++)
   {
      for(j=0;j<r;j++)
      scanf("%d",&second[i][j]);
   }
 for(i=0;i<r;i++)
   {
      for(j=0;j<r;j++)
      {
         sum[i][j] = first[i][j] - second[i][j];
         if(j!=r-1)
         printf("%d ", abs(sum[i][j]));
         else
         printf("%d", abs(sum[i][j]));
         
      }
      printf("
");
   }
}