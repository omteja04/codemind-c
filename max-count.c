#include<stdio.h>
#include<math.h>
int main()
{
    int n,d;
    scanf("%d",&n);
    int a[n],i,b[n],max,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            d=log10(a[i])+1;
            b[i]=d;
        }
        else if(a[i]<0)
        {
            d=log10(abs(a[i]))+1;
            b[i]=d;
        }
        else
        b[i]=1;
    }
    max=b[0];
    for(i=0;i<n;i++)
    {
        if(b[i]>max)
        {
            max=b[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(b[i]==max)
        c++;
    }
    printf("%d",c);
}


// https://thecodemind.io/app/discription.php?pageCategory=c3pzTm1NaHFsYWVCeFpGMVpkTDloZz09&Tid=ejVXWEE1U1RXOWxyQnFyMjZCYjJZZz09&Pid=U0lzdGpQNXp4OWthTlE1QkZGeSsrQT09&Course=UVVLR00zRzlNUzVnQXF5eE51VUNFdz09&Technology=a3RBaFZ5Zjd3SjBkMHppZW9GaDY2QT09&Topic=WTAwd2JyYXp1NUt0YmtZWG5JQjRZZz09