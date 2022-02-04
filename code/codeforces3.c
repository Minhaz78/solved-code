#include<stdio.h>
//#include<string.h>
int main()
{
char c[100];
int i,n,l;
scanf("%d",&n);
for( i=1;i<=n;i++)
{
scanf("%s",&c[i]);
l=strlen(c);

if(l>10)
{
printf("%c",c[0]);
printf("%d",l-2);
printf("%c",c[l-1]);
}

else
    printf("%s",c);
}
}

