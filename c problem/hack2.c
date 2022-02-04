 #include<stdio.h>
int main()
{
int a[10],b[10],i,n,count1=0,count2=0;
//scanf("%d",&n);


for(i=0;i<3;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<3;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<3;i++)
{
if(a[i]>b[i])
count1++;
 if(b[i]>a[i])
count2++;
}

printf("%d %d",count1++,count2++);

}
