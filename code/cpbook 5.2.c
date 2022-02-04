#include<stdio.h>
int main()
{
double a1,a2,b1,b2,c1,c2,d;
double x,y;
printf("a1:");
scanf("%f",&a1);
printf("a2:");
scanf("%f",&a2);
printf("b1:");
scanf("%f",&b1);
printf("b2:");
scanf("%f",&b2);
printf("c1:");
scanf("%f",&c1);
printf("c2:");
scanf("%f",&c2);
d=(a1*b2)-(b2*a1);
printf("%f",d);
if((int)d==0)
{
 printf("not");

}
else{
x=(b2*c1-b1*c2)/d;
y=(a1*c2-c1*a2)/d;

printf("x=%f,y=%f",x,y);
}


}
