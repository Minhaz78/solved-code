#include<stdio.h>
int main()
{
int i,position,item,n,la[100];
printf("enter number of element in the array :");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&la[i]);

}
printf("enter the insert location:");
scanf("%d",&position);
printf("enter the insert item:");
scanf("%d",&item);
for(i=n-1;i>=position -1;i--)
{
la[i+1]=la[i];


}
la[position]=item;
n=n+1;
printf("result is\n");
for(i=0;i<n;i++)
{
printf("%d\n",la[i]);


}

}
