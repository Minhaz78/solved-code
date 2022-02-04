#include<stdio.h>
int main()
{
char ch;
printf("enter the letter:");
ch=getchar();
int n=1,i=1;
while(n<10)
{

    n=n+1;
    if(n%2==0){

        continue;
    }
    printf("value =%d",n);
}
    for(; ; )
    {


        printf("%d*%d=%d\n",n,i,n*i);
    i++;
    if(i>10)
    {
        break;
    }
    }




}
