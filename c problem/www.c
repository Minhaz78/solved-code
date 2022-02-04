#include<stdio.h>
struct student
{
int id,age;
char name[30];
float cgpa;
};
main()
{
struct student std[5];
int i;
for(i=0;i<5;i++)
{
scanf("%d%s%f%d",&std[i].id,&std[i].name,&std[i].cgpa,&std[i].age);
printf("%d%s%f%d\n",std[i].id,std[i].name,std[i].cgpa,std[i].age);
}

}



