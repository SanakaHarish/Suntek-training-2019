#include<stdio.h>
void tib(int ,int ,int);
void main()
{
    int l,m,n;
    printf("enter the number of lines for triangle");
    scanf("%d",&l);
     printf("enter the number of lines for inverted triangle");
    scanf("%d",&m);
     printf("enter the number of lines for a box");
    scanf("%d",&n);
    tib(l,m,n);
}
void tib(int l,int m,int n)
{
    int c,i,j;
    for(i=0;i<l;i++)
    {
        for(c=0;c<=(n-i-2);c++)
            printf(" ");
        for(c=0;c<=i;c++)
            printf("* ");
        printf("\n");
    }printf("\n\n");
    for (i = m; i >= 0; i--)
   {
      for (c = 0; c <= (m - i - 1); c++)
         printf(" ");

      for (c = 0 ; c <= i-1; c++)
         printf(" *");

      printf("\n");
   }printf("\n\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==1 || j==n || i==j || j==n-i+1 )
            {
               printf("*");
            }

            else printf(" ");
        }
        printf("\n");
    }
}

