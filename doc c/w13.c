#include<stdio.h>
int main()
{
int p,n,r,s;

printf("p:");
scanf("%d",&p);
s=n%10;

for(n=0;n<p;n++)
{
    scanf("%d",&n);


if(s>=5)
{

    r=n+(10-s);
    printf("%d",r);
    }
else
{

    r=n-s;
printf("%d",r);
}
}
}
