#include<stdio.h>
void rev(int);
void main()
{
    int n;
    printf("enter a number to be reversed");
    scanf("%d",&n);
    rev(n);
}
void rev(int n)
{
int    r=0;
    while(n!=0)
    {
        r=r*10+n%10;
        n=n/10;
    }
    printf("%d",r);
}
