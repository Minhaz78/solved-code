#include<stdio.h>
int main()
{
int a,b,dif,eof;
while(scanf("%d%d",&a,&b)!=eof)
{
if(a<b)
{
dif=b-a;
printf("%d",dif);
}
else
{
dif=a-b;
printf("%d",dif);
}
}
}















