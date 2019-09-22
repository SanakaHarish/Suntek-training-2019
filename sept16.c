#include<stdio.h>
void occ(int [],int, int);
void main()
{
    int a[20],n,s,i;
    printf("enter size of the array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the element to find its occurance");
    scanf("%d",&s);
    occ(a,s,n);
}
void occ(int a[20],int s,int n)
{
    int i,count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
            count++;
    }
    if(count==0)
        printf("-1");
    else
        printf("%d-%d",s,count);
}
