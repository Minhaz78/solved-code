#include<stdio.h>
int main()
{


    int grade[5],i,sum=0;
    float average;
    for(i=0;i<5;i++)
    {
        printf("\n enter grade[%d]:",i++);
        scanf("%d",&grade[i]);
        sum+=grade[i];

    }
    average=(float)(sum)/5;
    printf("\n average is :%f",average);
}
