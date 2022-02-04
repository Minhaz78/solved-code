#include<stdio.h>
int add(int a,int b)
{
int z=a+b;


return z;


}int sub(int a,int b)
{
int r=a-b;


return r;


}int mul(int a,int b)
{
int w=a*b;


return w;


}double div(int a,int b)
{
double p=(double)a/(double)b;


return p;


}
int main()
{
int x,y;
scanf("%d%d",&x,&y);
printf("\nsum is %d:",add(x,y));
printf("\nsub is %d:",sub(x,y));
printf("\nmul is %d:",mul(x,y));
printf("\ndiv is %lf:",div(x,y));
return 0;




}
