#include<stdio.h>
int main()
{
int num,rev=0,rem;
printf("enter the any number to be reversed:");
scanf("%d",&num);
while(num>=1)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;

}
printf("reversed number : %d",rev);







}
