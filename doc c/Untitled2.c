/*#include<stdio.h>



int add(int a,int b)
{
int z=a+b;


return z;


}
int sub(int a,int b)
{
int r=a-b;


return r;


}
int mul(int a,int b)
{
int w=a*b;


return w;


}
double div(int a,int b)
{
double p=(double)a/(double)b;


return p;


}
int main()
{
int x,y,p,n;
scanf("%d",&n);
while(n--)
    {
scanf("%d%d%d",&x,&y,&p);
if(p==1)
printf("\nsum is %d:",add(x,y));
if(p==2)
printf("\nsub is %d:",sub(x,y));
if(p==3)
printf("\nmul is %d:",mul(x,y));
if(p==4)
printf("\ndiv is %lf:",div(x,y));

}

return 0;




}


*/


#include<stdio.h>
#include<string.h>
int min()
{
    char me[1000];
    scanf("%[^\ n]",&me);
    printf("%s",me);

}
int main()
{
    min();
}



