#include<stdio.h>
int main()
{
int arr[1000],sum_e=0,sum_o=0,n,i;
scanf("%d",&n);
for(i=0;i<n;i++)

{
scanf("%d",arr[i]);
if(arr[i]%2==0)
{
    sum_e=sum_e+arr[i];
}
else
{


sum_o=sum_o+arr[i];
}
}

/*if(sum_e>sum_o)
{
sum_e=sum_e-sum_o;
printf("%d",sum_e);
}
else
{


sum_o=sum_o-sum_e;
printf("%d",sum_o);
}











}
