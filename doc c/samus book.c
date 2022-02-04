#include<stdio.h>
int main()
{
int i,digit=0,space=0,letter=0,count=0;
char text[1000];
scanf("%[^\n]",&text);
for(i=0;i<strlen(text);i++)
{
if(text[i]>='0'&&text[i]<='9')
digit++;
else if(text[i]>='a'&&text[i]<='z'||text[i]>='A'&&text[i]<='Z')
letter++;
else  if(text[i]==' ')
space++;
else
count++;
}
printf("letter=%d\ndigit=%d\nspace=%d\nother char=%d\n",letter,digit,space,count);



}
