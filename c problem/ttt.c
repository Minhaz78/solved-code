#include<stdio.h>
#include<string.h>
main()
{
char c,text[20];
scanf("%s",text);
int i,j,len;
len=strlen(text);
for(i=0,j=len-1;i<len/2;i++,j--)
{
c=text[i];
text[i]=text[j];
text[j]=c;
}
printf("%s",text);
return 0;
}
