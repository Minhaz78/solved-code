#include<stdio.h>
int main()
{
//int ft_marks,st_marks,final_marks;
//double total_marks;
int marks,count,ft_marks [40]= {80,55,54,66,34,54,55,56,76,87,78,76,77,88,99,98,89,52,62,52,72,63,53,45,65,55,45,34,45,68,86,85,48,84,89,98,78,56,45,86},
st_marks[40]= {74,55,54,66,34,54,55,56,76,87,78,76,77,88,99,73,89,52,62,52,72,63,53,45,65,55,45,34,45,68,86,85,48,84,89,98,78,56,45,86},
final_marks[40]= {94,55,54,66,34,54,55,79,76,87,78,76,77,88,99,98,89,52,62,52,72,63,53,45,65,55,45,34,45,68,86,85,48,84,89,98,78,56,45,86};
int i;
double total_marks[40];
for(i=0;i<40;i++){

total_marks[i]=ft_marks[i]/4.0+st_marks[i]/4.0+final_marks[i]/2.0;
for( marks=33;marks<=100;marks++)
    count=0;
for(i=0;i<40;i++)
{
    if(total_marks[i]==marks)
    {
        count++;
    }
}
}
for(i=1;i<=40;i++)
{
printf("roll no:%d\ttotal marks:%0.01f\n",i,total_marks[i-1]);
printf("marks:%d count:%d\n",marks,count);
}


}
