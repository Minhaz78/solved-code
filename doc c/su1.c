#include<stdio.h>
int main()
{
int n,i,sum,avg,count=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
int a;
scanf("%d",&a);
count++;
sum=sum+a;

}
avg=sum/count++;
printf("%d",count++);
printf("%f",avg);





}
