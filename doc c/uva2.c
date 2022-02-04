#include<stdio.h>
int main()
{
int v,t,s,q;
scanf("%d",&q);
t=2*q;
printf("%d",t);
scanf("%d",&v);
if(-100<=v<=100 && 0<=t<=200)
{
s=v*t;
printf("%d",s);
}
else{
    printf("its cross the limit");
}
}
