#include<stdio.h>
#include<math.h>
int main()
{
int n,i;
int x;
printf("how many time of terms:",n);
scanf("%d",&n);
for(i=0;i<10000001;i++)
{
printf("num:",x);
scanf("%d",&x);
if(pow(x,2))
printf("yes",x);
else
printf("no",x);
}
}
