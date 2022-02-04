#include<stdio.h>
int min(int x[],int y[])
{
    int i,j,sum=0;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
sum=x[i][j]+y[i][j];
}
}
return sum;
}
main()
{
int x[i][j],y[i][j],i,j,sum=0;
min(x[],y[]);
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&x[i][j]);
scanf("%d",&y[i][j]);
}
}
printf("%d\n",sum);
}
