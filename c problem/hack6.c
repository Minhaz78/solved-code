 #include<stdio.h>
int main()
{
int n,i,j,y,temp=n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 temp--;
for(y=temp-1;y>=0;y--)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
printf("#");
}
printf("\n");
}
}


