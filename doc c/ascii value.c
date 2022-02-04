#include<stdio.h>
void main()
{
char text;
for(text=32;text<127;text++)
{
scanf("%c",&text);
getchar();
printf("%c=%d\n",text,text);

}


}
