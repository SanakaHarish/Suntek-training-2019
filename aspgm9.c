#include<stdio.h>
void table(int);
void main()
{
    int n;
    printf("which table you want to learn?");
    scanf("%d",&n);
    table(n);
}
void table(int n)
{
    int i;
     for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
}
