#include<stdio.h>
int main()
{
    int u;
    float c,cpu,s;
    scanf("%d",&u);
    if(u<=199)
    {
        c=u*1.20;
    }
    else if(u>=200 && u<400)
    {
        c=u*1.40;
    }
    else if(u>=400 && u<600)
    {
        c=u*1.60;
    }
    else if(u>=600 && u<800)
    {
        c=u*1.80;
    }
    else if(u>=800)
    {
        c=u*2.00;
    }
    cpu=c/u;
    printf("Units Consumed: %d
",u);
    printf("Cost per Unit: %.2f
",cpu);
    printf("Bill: %.2f
",c);
    if(c>=400)
    {   s=c*0.15;
        c=c+c*0.15;
        printf("Surcharge: %.2f
",s);
        printf("Total Amount: %.2f",c);
    }
    else
    {
       printf("Surcharge: 0.00
");
        printf("Total Amount: %.2f",c);
    }    
    }