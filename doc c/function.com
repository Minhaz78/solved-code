#include<stdio.h>
int funct(int count);
main()
{
int a,count;
for(count=1;count<=5;count++)
{
a=funct1(count);
printf("%d",a);
}
}
int funct1(int x)
{
int y;
y=x*y;
return(y);


}



}
