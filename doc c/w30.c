#include<stdio.h>
int main()
{
int i,j,temp,ara[]={10,20,30,40,50,60,70,80,90,100};

for(i=0,j=9;i<10;i++,j--)
{

temp=ara[j];
ara[j]=ara[i];
ara[i]=temp;
}

for(i=9;i>=0;i--)
{
printf("%d\n",ara[i]);

}
}






