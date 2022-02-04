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
if(position >= n+1)
{
    printf("deletion not possible");

}
else{
for(i=position-1;i<n-1;i++)
{
la[i]=la[i+1];


}
//item=la[position];
printf("result is\n");
n=n-1;
for(i=0;i<n;i++)
{
printf("%d\n",la[i]);


}
}
}
