#include<stdio.h>
void check(int *arr,int np);
void check(int *arr,int np)
{
int i,j;
for(i=0;i<np;i++)
{
int count=0;
for(j=i+1;j<np;j++)
{
if(*(a+2*j)=*(a+2*i))
{ 
count++;
}
printf("%d-%d ",*(a+2*i),count);
}
}
}

int main()
{
int i,j,arr[100],n;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
if(n==0)
printf("-1");
else
check(a,n);
}


