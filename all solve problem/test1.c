#include<stdio.h>
int main()
{
int i,sum=0,n,a[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
sum=sum+a[i];
//printf("%d",sum);

}
printf("%d",sum);
return 0;
}
