#include<stdio.h>
int main()
{
int n,i,count1=0,count2=0;
scanf("%d",&i);
while(i--)
{

scanf("%d",&n);

if(n>0)
{
    printf("%d is positive\n",n);
    count1++;
    }
else if (n<0)
{
    printf("%d is negative\n",n);
    count2++;
    }
else
{
printf("%d is zero:",n);
}
}
printf("the number of positive is %d\n",count1++);
printf("the number of negative is %d\n",count2++);





}
