#include <stdio.h>
int main()
{
int x, a,b,gcd;
scanf("%d", &a);
scanf("%d", &b);
if(a<b)
x=a;
else
x=b;
for(;x>=1;x--){
if(a%x==0)
    gcd=x;
else if(b%x==0)
gcd=x;
}
printf("gcd is %d",gcd);
return 0;
}
