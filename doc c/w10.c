#include<stdio.h>
int main()
{
int n,i,count1=0,count2=0;

printf("terms:");
scanf("%d",&n);
while(n--)
{


printf("number:");
scanf("\n%d",&i);
if(i%2==0)
{
printf("%d is even\n:",i);
count1++;

}

else
{
    printf("%d is 0dd\n:",i);
    count2++;

}
}
printf("%d is even\n",count1++);
printf("%d is odd",count2++);
}
