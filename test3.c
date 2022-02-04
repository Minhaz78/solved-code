#include<stdio.h>
int main()
{
int i,n,j,x,y,z,n1=2;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=5;i<=j;j--)
{
printf("*");
}

printf("\n");
}
for(x=5;x>=n1;--x)
{
    for(y=1;y<=x;++y)
    {
        printf("*");
    }
    printf("\n");
}
}
