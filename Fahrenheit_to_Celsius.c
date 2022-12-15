#include<stdio.h>
int main()
{
    float f,c;
    scanf("%f%f",&f,&c);
    c=((f-32)*5)/9;
    printf("%0.2f",c);
}