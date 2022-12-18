#include<stdio.h>
int main()
{
    int n,i,r=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    if(n%i==0)
    r=r+i;
    }
    if(r==2*n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}