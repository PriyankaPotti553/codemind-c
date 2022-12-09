#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x>=90)
    {
        printf("Grade A");
    }
    else if(x>=80)
    {
        printf("Grade B");
    }
    else if(x>=55)
    {
        printf("Grade C");
    }
    else if(x>=50)
    {
        printf("Grade D");
    }
    else if(x>=40)
    {
        printf("Grade E");
    }
    else if(x<40)
    {
        printf("Grade F");
    }
}