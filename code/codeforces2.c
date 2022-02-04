#include<stdio.h>
int main()
{
int x,y,a;
printf("x=");
scanf("%d",&x);
printf("y=");
scanf("%d",&y);
printf("a=");
scanf("%d",&a);
int length=x/a+1;
int width=y/a+1;
int result=length*width;
printf("%d",result);
return 0;




}
