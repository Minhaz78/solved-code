#include<stdio.h>
main()
{
int n, sum=0,c,value;
printf("enter the number of integers you want to add:");
scanf("%d",&n);
printf("enter %d integers one by one:\n ",n);
for(c=1;c<=n;c++)
{
scanf("%d",&value);
sum=sum+value;

}
printf("sum=%d\n",sum);







}
