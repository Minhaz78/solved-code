#include<stdio.h>
int main()
{
int n,i;
for(i=0;i<=255;i++)
{
scanf("%d",&n);
if(0<=n&&n<=99)
{
printf("black");
}
else if(100<=n&&n<=199)
{
printf("gray");
}
else
{
printf("white");
}
}
}
