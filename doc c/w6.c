#include<stdio.h>
int  main()
{
int year;
printf("enter the whose year you check:");
scanf("%d",&year);
if(year%400==0)
printf("%d this year is leaf year:",year);
else if(year%100==0)
printf("%d this year is not  leaf year:",year);
else if(year%4==0)
printf("%d this year is leaf year:",year);
else
printf("%d this year is not leaf year:",year);







}
