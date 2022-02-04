#include<stdio.h>
int main()
{
int n,reminder;
printf("enter the number:");
scanf("%d",&n);
reminder=n%2;
printf("reminder:%d\n",reminder);
if(reminder==0)
{
    printf("the number is even");
}
else
{
    printf("the number is odd");
}




}
