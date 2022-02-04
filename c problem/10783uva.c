#include<stdio.h>
int main()
{
int i,k,n;
int sum=0,j;
int case1=0,case2=0;
scanf("%d",&n);
while(n--)

{
scanf("%d",&i);
    scanf("%d",&j);
    if(i/2!=0)
        case1=sum+i;
        if(j/2!=0)
            case2=sum+j;

}
        printf("%d%d",case1,case2);
}
