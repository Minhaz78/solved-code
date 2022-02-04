#include <stdio.h>
#include <stdlib.h>
int main()
{
int a[1000];
int i,n;//sum1=0,sum2=0,
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
int max=a[0];
for(i=1;i<n;i++)
{
if(max<a[i])
{
max=a[i];
//sum1=sum1+max;
}
}
int min=a[0];
for(i=1;i<n;i++)
{
if(min>a[i])
{
min=a[i];
//sum2=sum2+min;
}
}
//printf("%d\n%d",sum1,sum2);
printf("%d\n%d",max,min);
}



