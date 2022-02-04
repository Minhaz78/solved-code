#include<stdio.h>
int main()
{
int i,j,a[100][100],n,sum1=0,sum2=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=1;i<n;i++)
{
for(j=1;j<n;j++)
{
if(i==j)
sum1=sum1+a[i][j];
if(i+j==n-1)
sum2=sum2+a[i][j];
}
}
for(i=1;i<n;i++)
{
for(j=1;j<n;j++)
{
printf("%d\n",sum1);
printf("%d\n",sum2);
}
}
}




