#include<stdio.h>
int main()
{
char ch;
printf("enter any number from 0 to 3:");
ch=getchar();
switch(ch)
{
case '0':printf("zero.");break;
case '1':printf("one.");break;
case '2':printf("two.");break;
case '3':printf("three.");break;
default:printf("not in the range from 0 to 3");

}


}
