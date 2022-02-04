#include<stdio.h>
int main()
{
char text[80],backtext[80];
int i,j,n,len;
scanf("%d",&n);
scanf("%[^\n]",&text);
len=strlen(text);
for(i=0,j=len-1;i<len;i++,j--)
{
backtext[j]=text[i];

}

for(i=0;i<len;i++)
printf("%c",backtext[i]);




}
