#include<stdio.h>
struct student
    {
        int roll;
        char name[20];
        float per;
    };
int main()
{
    int n,i;
    struct student std[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d %s %f",&std[i].roll,&std[i].name,&std[i].per);
    printf("Roll\tName\tpercentage\n");
    for(i=0;i<n;i++)
    printf("%d\t%s\t%.4f\n",std[i].roll,std[i].name,std[i].per);
}

/*int main()
{
    struct student std;
    scanf("%d %s %f",&std.roll,&std.name,&std.per);

    printf("%d\n%s\n%.4f",std.roll,std.name,std.per);
    return 0;
}*/
