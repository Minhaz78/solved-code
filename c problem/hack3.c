#include<stdio.h>
int main()
{
int a[100];
int i,n;
float count1=0,count2=0,count3=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>0)
{
count1++;
}
else if(a[i]<0)
{
count2++;
}
else if(a[i]==0)
{
count3++;
}
}
printf("%f\n%f\n%f",count1/n,count2/n,count3/n);

}

