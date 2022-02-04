#include<stdio.h>
int main()
{
int n, j,i,a,b;
scanf("%d",&n);
for(j=1;j<=n;j++)
{
scanf("%d",&a);
scanf("%d",&b);
int sum=0;
for(i=a;i<=b;i++)
{
if(i%2!=0)
sum=sum+i;
}
printf("case%d:%d",j,sum);
}
}
