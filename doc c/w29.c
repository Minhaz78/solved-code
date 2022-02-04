#include<stdio.h>
int main()
{
int ara[]={10,20,30,40,50,60,70,80,90,100};

int i,j,temp;
for(i=0,j=9;i<10;i++,j--)
{
    temp=ara[i];
    ara[i]=ara[j];
    ara[j]=temp;
    //printf("%d th element is :%d\n",i+1,ara[i]);
    //ara2[j]=ara[i];
    printf("%d%d\n",ara[i],ara[j]);
}
/*for(i=0;i<10;i++)
{
    ara[i]=ara2[i];
}*/
//for(i=0;i<10;i++){
//printf("first element : %d\n",ara[-1]);
//printf("third element:%d\n",ara[100]);

return 0;
}




