#include<stdio.h>
int main(){
int a[1000];
int i,n,x,sum1=0,sum2=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
if(a[i]>a[i+1])
{
x=a[i];
sum1=sum1+a[i];
}
else
{
x=a[i+1];
sum2=sum2+a[i+1];
}
printf("%d%d",sum1,sum2);
}
}
