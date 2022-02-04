#include<stdio.h>
int main()
{
int n,i,count1=0,count2=0;

printf("terms:");
scanf("%d",&n);
while(n++)
{


printf("number:");
scanf("\n%d",&i);
if(0<i)
{
printf("%d is positive\n:",i);
count1++;

}

else
{
    printf("%d is negative\n:",i);
    count2++;

}
}
printf("%d is positive\n",count1++);
printf("%d is negative",count2++);
}
