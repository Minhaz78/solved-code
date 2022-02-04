#include<stdio.h>
int main()
{
int ara[]={1,2,3,4,5,6,7,8,9,10};
int low=0;
int high=9;
int mid;
int num=7;
while(low<=high)
{
mid=(low+high)/2;
if(num==ara[mid])
{
break;
}
if(num<ara[mid])
{
high=mid-1;


}
else
{
low=mid+1;
}
}
if(low>high)
printf("%d id not in array\n",num);
else
printf("%d is found in array");
}
