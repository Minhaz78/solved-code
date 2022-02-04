#include<stdio.h>
int main()
{
int la[100],n,position,j,item;
printf("enter number of elements in array:");
scanf("%d",&n);
printf("enter %d elements\n",n);
for( j=0;j<n;j++)
{
    scanf("%d",&la[j]);
}
printf("enter the insert location:");
scanf("%d",&position);
printf("enter the item");
scanf("%d",&item);
for(j=n-1;j>=position-1;j--)
{
    la[j+1]=la[j];

}
    la[position]=item;
printf("result is  \n");
n=n+1;
for(j=0;j<n;j++)
{
printf("%d\n",la[j]);
}




}
