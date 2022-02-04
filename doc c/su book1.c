#include<stdio.h>
int main()
{
int marks,i,count;
int total_marks[]={86,45,56,77,67,78,79,80,88,87,86,83,56,65,67,67,67,67,70,70,70,70,70,44,76,78,79,90,96,93,99,97,95,58,61,51,81,71,85,75,68,74,54,64,84,94,97};
for(marks=50;marks<=100;marks++)
{
count=0;
for(i=0;i<40;i++)
{
if(total_marks[i]==marks)
{
//count++;
//getchar();
}
}
printf("marks:%d count:%d\n",count,marks);




}







}
