#include<stdio.h>
int main()

{
int n,x,count1=0,count2=0;
scanf("%d",&n);
while(n--)
{
scanf("%d",&x);
if(0<x)
{
printf("\n%d is positive",x);
count1++;
}
else
{
printf("%d is negative",x);
count2++;

}



}
printf("\n%dis positive%dis negative",count1,count2);




}
