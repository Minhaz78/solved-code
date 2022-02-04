#include<stdio.h>
int main()
{
int marks ,fmarks[100],smarks[80],n,lmarks[70],i,j;
double tmarks[100];
printf("number of student:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("first marks:");
scanf("%d",&fmarks[i]);
printf("second marks:");
scanf("%d",&smarks[i]);
printf("last marks:");
scanf("%d",&lmarks[i]);
}
for(i=0;i<n;i++)
{
    tmarks[i]=fmarks[i]/4.0 +smarks[i]/4.0 +lmarks[i]/2.0;
}
for(i=0;i<n;i++)
{

    printf("roll no:%d\ttmarks:%0.0lf\n",i,tmarks[i]);
}
for(marks=50;marks<=100;marks++)
{
    int count=0;
    for(i=0;i<n;i++)
    {

        if(tmarks[i]== marks)
        {
            count++;
        }
    }
        printf("marks %d count %d",marks,count);

}


}
