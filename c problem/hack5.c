#include<stdio.h>
int main()
{
int a[3][3],i,j,k,sum1=0,sum2=0,x,n,difference;
scanf("%d",&n);
x=i+j;
for( j=0;j<n;j++)
{
for( i=0;i<n;i++)
{
scanf("%d",&a[i][j]);
for(k=1;k<a[i][j];k++)
{
if(i==j)
sum1=sum1+a[i][j];
if(x==4)
sum2=sum2+a[i][j];
}
difference=|sum1-sum2|;
}
printf("%d",difference);
}
}
