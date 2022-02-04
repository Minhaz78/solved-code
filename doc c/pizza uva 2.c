#include<stdio.h>
main()
{
    int n;
    for(;;)
    {
        scanf("%d",&n);
        if(n<0)
            break;
        else
        {
            int s=0;
            //s=(n+1);
            s = (n*((n+1)/2))+1;
            //s= n*(s+1);
            printf("%d\n",s);
        }
    }
    return(0);
}
