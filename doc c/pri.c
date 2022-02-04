#include<stdio.h>
void call_by_value(int a,int b)
{
a=5;
b=10;
int c=a+b;

printf("a=%d,b=%d",a,b);

}
int main()
{
int a=15,b=20;
printf("a=%d,b=%d",a,b);
call_by_value(a,b);
printf("%d%d",call_by_value(a,b));



}
