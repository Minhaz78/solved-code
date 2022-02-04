#include<stdio.h>
int main()
{
char bok[100];
int count=0,i,length;
scanf("%s",&bok[100]);
length=strlen bok[100];
for(i=0;i<length;i++)
{
    if(bok[i]==" ")
    {
        count++;
    }
}
printf("%d",count);


}
