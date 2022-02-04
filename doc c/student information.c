#include<stdio.h>
struct student
{
int id;
int numofc,creditofc;
char name[30],sem[10],nameofc[10][10];
};
main()
{
int numofs,creditfee,examfee;
printf("enter the number of student:");
scanf("%d",&numofs);
struct student std[numofs+5];
printf("enter the course fee per credit:");
scanf("%d",&creditfee);
printf("enter the exam fee per credit:");
scanf("%d",&examfee);
getchar();
for(int i=1;i<=numofs;i++)
{
printf("enter your name:");
scanf("[^\n]",&std[i].name);
printf("enter your id no:");
scanf("%d",&std[i].id);
getchar();
printf("enter your semester name:");
scanf("[^\n]",&std[i].sem);
printf("enter the number of course you taken:");
scanf("%d",&std[i].numofc);
printf("enter the number of course:\n");
for(int j=0;j<std[i].numofc;j++)
{
getchar();
printf("course %d:",j+1);
for(int k=0;k<7;k++)
{
scanf("%c",&std[i].nameofc[j][k]);
}
getchar();
printf("course credit:",j+1);
scanf("%d",&std[i].creditofc);
}
}
int sum=0,tk,sum2=0,tk2;
printf("\n\n\n");
for(int i=1;i<=numofs;i++)
{
printf("student no:%d\n",i);
printf("student name:%s\n",std[i].name);
printf("student id:%d\n",std[i].id);
printf("semester:%s\n",std[i].sem);
printf("number of course you taken:%d\n",std[i].numofc);
printf("course titles:\n");
for(int j=0;j<std[i].numofc[j];j++)
{
for(int k=0;k<7;k++)
printf("%c",std[i].nameofc[j][k]);
tk=creditfee*std[i].creditofc;
sum=sum+tk;
tk2=examfee*std[i].creditofc;
sum2=sum2+tk2;
printf("course fee is %d & exam fee %d",tk,tk2);
printf("\n");
}
printf("\n\ntotal credit fee %d\n",sum);
printf("total exam fee %d",sum2);
}
return 0;
}
