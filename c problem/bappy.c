#include<stdio.h>
#include<conio.h>
int main()
{
    int n,p,i,j,x;
    scanf("%d",&n);
    for(p=1;p<=n;p++)
    {
        x=n-p;
        for(i=1;i<=x;i++)
        {
            printf(" ");
        }
        for(j=1;j<=p;j++)
        {
            printf("#");
        }
        printf("\n");
    }

}
