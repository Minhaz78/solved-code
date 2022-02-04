#include<stdio.h>
int main()
{
int i,n,a[3],b[3],count1=0,count2=0;
scanf("%d %d %d",&a[0],&a[1],&a[2]);
scanf("%d %d %d",&b[0],&b[1],&b[2]);
for(i=0;i<3;i++)
{
if(a[i]<b[i])
count1++;
else if(a[i]>b[i])
count2++;

}
printf("%d %d",count1,count2);



}
