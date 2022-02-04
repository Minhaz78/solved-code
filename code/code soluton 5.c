#include<stdio.h>
int main()
{
int n,k,i,a[1000];
int count=0;
scanf("%d",&n);

scanf("%d",&k);
for(i=0;i<n;i++)
{

scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>=a[k-1]&&a[i]>0)
{
count++;

}
}
printf("%d",count);
}
