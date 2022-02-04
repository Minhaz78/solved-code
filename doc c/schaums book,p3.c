#include<stdio.h>
int main()
{
int i=0,n;
scanf("%d",&n);
char text[80];
getchar();
do
{
scanf("%c",&text[i]);
printf("%c=%d\n",text[i],text[i]);
i++;
}
while(i<n);

}
