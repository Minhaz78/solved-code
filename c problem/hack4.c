#include<stdio.h>
int main()
{
long int a[10*10];
int n,i;
long int sum=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%ld",&a[i]);
sum=sum+a[i];
}
printf("%ld",&sum);


}
