#include<stdio.h>
int main()
{
int n=5,i,j,sum=0,a[1000];
for(i=1;i<=5;i++)
{
    scanf("%d",&a[i]);
}
for(j=1;j<=i;j++)
{
sum=sum+a[i];
}
printf("%d",sum);




}
