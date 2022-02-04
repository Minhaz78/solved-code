#include<stdio.h>
int funct1(int count);
main()
{
int a,count;
for(count=1;count<=5;++count)
{
a=funct1(count);
printf("%d\n ",a);
}
}
int funct1(int x)
{
int y;
y=x*x;
return(y);


}




