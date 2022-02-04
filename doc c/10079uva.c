#include<stdio.h>
int main()
{
    int  p,i;
    while(scanf("%d",&p))
    {
        i=(p*(p+1)/2)+1;
        printf("%d\n",i);
    }
}
