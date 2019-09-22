#include<stdio.h>
void occ(int [],int);
void main()
{
    int a[20],n,i;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the elements into the array");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    occ(a,n);
}
void occ(int a[20],int n)
{
    int i,b[20],count,j,l,k;
    l=n;
    for(i=0;i<n;i++)
        b[i]=a[i];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n;k++)
                    a[k]=a[k+1];
                n--;
            }
        }
    }
    for(i=0;i<n;i++)
    {count=0;
        for(j=0;j<l;j++)
        {
            if(a[i]==b[j])
                count++;
        }
        printf("%d-%d\n",a[i],count);
    }

}
