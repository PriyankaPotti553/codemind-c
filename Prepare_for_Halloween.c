#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,b,c,d;
        scanf("%d%d",&a,&b);
        c=2*a;
        d=5*b;
        if(c>d)
        {
            printf("Chocolate
");
        }
        else if(c==d)
        {
            printf("Either
");
        }
        else if(c<d)
        {
            printf("Candy
");
        }
    }
}