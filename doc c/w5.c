#include<stdio.h>
int main()
{
int i,j,n,arr[1000];
scanf("%d",&n);
for(i=2;i<=n;i++)

    arr[i]=1;
    arr[0]=0;
    arr[1]=0;
for(i=2;i<=n;i++)
{
for(j=2;j<i;j++)
{
if(i%j==0)
arr[i]=0;
break;


}
int x;
scanf("%d",&x);

if(arr[x]==1)
{
printf("%d is prime",x);

}
else
{
printf("%d is not prime",x);
}




}






}
