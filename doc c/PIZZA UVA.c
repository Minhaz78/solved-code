#include<stdio.h>
int main()
{
    int i,n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n<0)
            break;
        int s=1;
        for(i=1; i<=n ;i++)
        {
            s+=i;
        }
        printf("%d\n",s);
    }





}
