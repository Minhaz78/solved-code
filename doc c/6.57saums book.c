#include<stdio.h>
int main()
{
char text[100],backtext[100];
scanf("%[^\n]",&text);
int i,j,len;
len=strlen(text);
for(i=0,j=len-1;i<len;i++,j--)
{
backtext[j]=text[i];
}
backtext[len]='\0';

for(i=0;i<len;i++)
printf("%s",backtext[j]);






}
