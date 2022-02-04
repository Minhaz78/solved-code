#include<stdio.h>
int main()
{
int n,i,x,y,z,area;

printf("terms:");
scanf("%d",&n);
for(i=1;i<100;i++)
{
scanf("%d%d%d",&x,&y,&z);
printf("x=%d\ny=%d\nz=%d\n",x,y,z);
area=x*y*z;
printf("area=%d",area);



}
}
