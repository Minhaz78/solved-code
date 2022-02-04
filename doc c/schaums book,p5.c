#include<stdio.h>
int main()
{
int i,n;
scanf("%d",&n);
char text[80];
getchar();
for(i=0;i<n;i++)
{
scanf("%c",&text[i]);
printf("%c=%d\n",text[i],text[i]);

}
return 0;
}
